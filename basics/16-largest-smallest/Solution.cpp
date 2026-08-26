#include <vector>
#include <utility>
#include <algorithm>

std::pair<int, int> largestSmallest(const std::vector<int>& arr) {
    auto [minIt, maxIt] = std::minmax_element(arr.begin(), arr.end());
    return {*maxIt, *minIt};
}
