#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;
        while (left < right) {
            std::swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
