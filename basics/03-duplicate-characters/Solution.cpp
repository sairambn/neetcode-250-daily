#include <string>
#include <vector>
#include <unordered_set>

std::vector<char> findDuplicates(const std::string& s) {
    std::unordered_set<char> seen, duplicates;
    for (char c : s) {
        if (seen.count(c)) duplicates.insert(c);
        else seen.insert(c);
    }
    return std::vector<char>(duplicates.begin(), duplicates.end());
}
