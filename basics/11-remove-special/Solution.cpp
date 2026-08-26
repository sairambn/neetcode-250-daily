#include <string>
#include <cctype>

std::string removeSpecial(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (std::isalnum(c) || std::isspace(c)) result += c;
    }
    return result;
}
