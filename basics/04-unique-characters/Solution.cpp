#include <string>
#include <vector>
#include <unordered_map>

std::vector<char> findUnique(const std::string& s) {
    std::unordered_map<char, int> count;
    for (char c : s) count[c]++;
    std::vector<char> result;
    for (auto& [c, freq] : count) {
        if (freq == 1) result.push_back(c);
    }
    return result;
}
