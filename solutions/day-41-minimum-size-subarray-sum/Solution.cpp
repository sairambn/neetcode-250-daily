#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int left = 0;
        int total = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < static_cast<int>(nums.size()); ++right) {
            total += nums[right];
            while (total >= target) {
                minLen = std::min(minLen, right - left + 1);
                total -= nums[left];
                left++;
            }
        }

        return minLen == INT_MAX ? 0 : minLen;
    }
};
