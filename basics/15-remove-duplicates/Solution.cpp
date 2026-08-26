#include <vector>
#include <unordered_set>

std::vector<int> removeDuplicates(const std::vector<int>& arr) {
    std::unordered_set<int> seen;
    std::vector<int> result;
    for (int num : arr) {
        if (seen.insert(num).second) result.push_back(num);
    }
    return result;
}
