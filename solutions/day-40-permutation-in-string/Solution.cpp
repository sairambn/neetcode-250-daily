#include <string>
#include <vector>

class Solution {
public:
    bool checkInclusion(std::string s1, std::string s2) {
        if (s1.size() > s2.size()) return false;

        std::vector<int> need(26, 0);
        std::vector<int> window(26, 0);

        for (char c : s1) {
            need[c - 'a']++;
        }

        for (int i = 0; i < static_cast<int>(s2.size()); ++i) {
            window[s2[i] - 'a']++;

            if (i >= static_cast<int>(s1.size())) {
                window[s2[i - s1.size()] - 'a']--;
            }

            if (window == need) {
                return true;
            }
        }

        return false;
    }
};
