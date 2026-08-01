#include <vector>
#include <list>
#include <utility>

class MyHashMap {
private:
    static const int SIZE = 1000;
    std::vector<std::list<std::pair<int, int>>> buckets;

    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashMap() : buckets(SIZE) {}

    void put(int key, int value) {
        auto& bucket = buckets[hash(key)];
        for (auto& p : bucket) {
            if (p.first == key) {
                p.second = value;
                return;
            }
        }
        bucket.emplace_back(key, value);
    }

    int get(int key) {
        for (auto& p : buckets[hash(key)]) {
            if (p.first == key) return p.second;
        }
        return -1;
    }

    void remove(int key) {
        auto& bucket = buckets[hash(key)];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->first == key) {
                bucket.erase(it);
                return;
            }
        }
    }
};
