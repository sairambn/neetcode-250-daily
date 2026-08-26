#include <string>
#include <algorithm>

bool areAnagrams(std::string s1, std::string s2) {
    if (s1.size() != s2.size()) return false;
    std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    return s1 == s2;
}
