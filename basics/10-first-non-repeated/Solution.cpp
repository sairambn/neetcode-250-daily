#include <string>
#include <unordered_map>

char firstNonRepeated(const std::string& s) {
    std::unordered_map<char, int> count;
    for (char c : s) count[c]++;
    for (char c : s) {
        if (count[c] == 1) return c;
    }
    return '\0';
}
