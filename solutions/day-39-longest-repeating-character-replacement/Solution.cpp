#include <string>
#include <algorithm>

class Solution {
public:
    int characterReplacement(std::string s, int k) {
        int count[26] = {0};
        int left = 0;
        int maxFreq = 0;
        int maxLen = 0;

        for (int right = 0; right < static_cast<int>(s.size()); ++right) {
            count[s[right] - 'A']++;
            maxFreq = std::max(maxFreq, count[s[right] - 'A']);

            while ((right - left + 1) - maxFreq > k) {
                count[s[left] - 'A']--;
                left++;
            }

            maxLen = std::max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
