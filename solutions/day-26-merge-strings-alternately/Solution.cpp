#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string result;
        int i = 0;
        int n1 = static_cast<int>(word1.size());
        int n2 = static_cast<int>(word2.size());

        while (i < n1 || i < n2) {
            if (i < n1) result += word1[i];
            if (i < n2) result += word2[i];
            i++;
        }

        return result;
    }
};
