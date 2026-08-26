#include <string>
#include <cctype>

bool isPalindrome(std::string s) {
    int left = 0, right = static_cast<int>(s.size()) - 1;
    while (left < right) {
        if (std::tolower(s[left]) != std::tolower(s[right])) return false;
        left++;
        right--;
    }
    return true;
}
