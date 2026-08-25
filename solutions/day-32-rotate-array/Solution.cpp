#include <vector>
#include <algorithm>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = static_cast<int>(nums.size());
        k %= n;

        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }

private:
    void reverse(std::vector<int>& nums, int left, int right) {
        while (left < right) {
            std::swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};
