#include <string>
#include <vector>

class Codec {
public:
    std::string encode(std::vector<std::string>& strs) {
        std::string result;
        for (const auto& s : strs) {
            result += std::to_string(s.size()) + "#" + s;
        }
        return result;
    }

    std::vector<std::string> decode(std::string s) {
        std::vector<std::string> result;
        int i = 0;
        while (i < s.size()) {
            int j = s.find('#', i);
            int length = std::stoi(s.substr(i, j - i));
            result.push_back(s.substr(j + 1, length));
            i = j + 1 + length;
        }
        return result;
    }
};
