#include <vector>
#include <string>
#include <stack>

class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::stack<int> st;

        for (const auto& op : operations) {
            if (op == "+") {
                int top = st.top();
                st.pop();
                int newTop = top + st.top();
                st.push(top);
                st.push(newTop);
            } else if (op == "D") {
                st.push(2 * st.top());
            } else if (op == "C") {
                st.pop();
            } else {
                st.push(std::stoi(op));
            }
        }

        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
