#include <string>

int countChar(const std::string& s, char target) {
    int count = 0;
    for (char c : s) if (c == target) count++;
    return count;
}
