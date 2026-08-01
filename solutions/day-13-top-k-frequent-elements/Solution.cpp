#include <vector>
#include <unordered_map>
#include <queue>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> count;
        for (int num : nums) count[num]++;

        using P = std::pair<int, int>;
        std::priority_queue<P, std::vector<P>, std::greater<P>> heap;

        for (auto& [num, freq] : count) {
            heap.push({freq, num});
            if (heap.size() > k) heap.pop();
        }

        std::vector<int> result;
        while (!heap.empty()) {
            result.push_back(heap.top().second);
            heap.pop();
        }
        return result;
    }
};
