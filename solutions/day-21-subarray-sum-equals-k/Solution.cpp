#include <vector>
#include <unordered_map>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int count = 0;
        int prefix = 0;
        std::unordered_map<int, int> seen;
        seen[0] = 1;

        for (int num : nums) {
            prefix += num;
            if (seen.count(prefix - k)) {
                count += seen[prefix - k];
            }
            seen[prefix]++;
        }

        return count;
    }
};
