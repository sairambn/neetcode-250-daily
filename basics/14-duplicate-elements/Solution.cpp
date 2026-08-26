#include <vector>
#include <unordered_set>

std::vector<int> findDuplicateElements(const std::vector<int>& arr) {
    std::unordered_set<int> seen, duplicates;
    for (int num : arr) {
        if (seen.count(num)) duplicates.insert(num);
        else seen.insert(num);
    }
    return std::vector<int>(duplicates.begin(), duplicates.end());
}
