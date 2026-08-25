#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::unordered_set<char> rows[9];
        std::unordered_set<char> cols[9];
        std::unordered_set<char> boxes[9];

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char num = board[i][j];
                if (num == '.') continue;

                int boxIdx = (i / 3) * 3 + j / 3;
                if (rows[i].count(num) || cols[j].count(num) || boxes[boxIdx].count(num)) {
                    return false;
                }

                rows[i].insert(num);
                cols[j].insert(num);
                boxes[boxIdx].insert(num);
            }
        }

        return true;
    }
};
