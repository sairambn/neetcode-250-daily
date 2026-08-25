#include <vector>

class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        if (nums.empty()) return {};

        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;
        bool has1 = false, has2 = false;

        for (int num : nums) {
            if (has1 && num == candidate1) {
                count1++;
            } else if (has2 && num == candidate2) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
                has1 = true;
            } else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
                has2 = true;
            } else {
                count1--;
                count2--;
            }
        }

        std::vector<int> result;
        int threshold = static_cast<int>(nums.size()) / 3;

        if (has1) {
            int c = 0;
            for (int num : nums) if (num == candidate1) c++;
            if (c > threshold) result.push_back(candidate1);
        }
        if (has2) {
            int c = 0;
            for (int num : nums) if (num == candidate2) c++;
            if (c > threshold) result.push_back(candidate2);
        }

        return result;
    }
};
