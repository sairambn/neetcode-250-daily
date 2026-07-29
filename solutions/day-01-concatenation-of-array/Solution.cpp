#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        std::vector<int> result(2 * n);

        for (int i = 0; i < n; ++i) {
            result[i] = nums[i];
            result[i + n] = nums[i];
        }

        return result;
    }
};
