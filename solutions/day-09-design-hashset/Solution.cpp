#include <vector>
#include <list>

class MyHashSet {
private:
    static const int SIZE = 1000;
    std::vector<std::list<int>> buckets;

    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashSet() : buckets(SIZE) {}

    void add(int key) {
        auto& bucket = buckets[hash(key)];
        for (int val : bucket) {
            if (val == key) return;
        }
        bucket.push_back(key);
    }

    void remove(int key) {
        buckets[hash(key)].remove(key);
    }

    bool contains(int key) {
        for (int val : buckets[hash(key)]) {
            if (val == key) return true;
        }
        return false;
    }
};
