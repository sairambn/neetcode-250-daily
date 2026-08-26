#include <vector>
#include <unordered_map>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> seen;

        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            if (seen.count(nums[i]) && i - seen[nums[i]] <= k) {
                return true;
            }
            seen[nums[i]] = i;
        }

        return false;
    }
};
