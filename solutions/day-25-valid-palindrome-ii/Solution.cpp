#include <string>

class Solution {
public:
    bool validPalindrome(std::string s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return isPal(s, left + 1, right) || isPal(s, left, right - 1);
            }
            left++;
            right--;
        }

        return true;
    }

private:
    bool isPal(const std::string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
