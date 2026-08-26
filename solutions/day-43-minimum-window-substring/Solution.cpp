#include <string>
#include <unordered_map>
#include <climits>

class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        if (t.empty() || s.empty()) return "";

        std::unordered_map<char, int> need;
        for (char c : t) need[c]++;

        int required = static_cast<int>(need.size());
        int formed = 0;
        std::unordered_map<char, int> window;
        int left = 0;
        int minLen = INT_MAX;
        int minStart = 0;

        for (int right = 0; right < static_cast<int>(s.size()); ++right) {
            char c = s[right];
            window[c]++;

            if (need.count(c) && window[c] == need[c]) {
                formed++;
            }

            while (left <= right && formed == required) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    minStart = left;
                }

                char leftChar = s[left];
                window[leftChar]--;
                if (need.count(leftChar) && window[leftChar] < need[leftChar]) {
                    formed--;
                }
                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};
