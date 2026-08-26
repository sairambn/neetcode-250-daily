#include <vector>
#include <set>

int secondLargest(const std::vector<int>& arr) {
    std::set<int, std::greater<int>> s(arr.begin(), arr.end());
    if (s.size() < 2) return *s.begin();
    auto it = s.begin();
    ++it;
    return *it;
}
