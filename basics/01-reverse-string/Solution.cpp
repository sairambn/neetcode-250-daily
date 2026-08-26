#include <string>
#include <algorithm>

std::string reverseString(std::string s) {
    std::reverse(s.begin(), s.end());
    return s;
}
