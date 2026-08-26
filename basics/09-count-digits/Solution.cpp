#include <string>
#include <cctype>

int countDigits(const std::string& s) {
    int count = 0;
    for (char c : s) if (std::isdigit(c)) count++;
    return count;
}
