#include <string>
#include <utility>

std::pair<int, int> countVowelsConsonants(const std::string& s) {
    int v = 0, c = 0;
    std::string vowels = "aeiouAEIOU";
    for (char ch : s) {
        if (std::isalpha(ch)) {
            if (vowels.find(ch) != std::string::npos) v++;
            else c++;
        }
    }
    return {v, c};
}
