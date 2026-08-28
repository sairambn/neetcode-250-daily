#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars(n);
        for (int i = 0; i < n; i++) {
            cars[i] = {position[i], (double)(target - position[i]) / speed[i]};
        }
        sort(cars.rbegin(), cars.rend());

        stack<double> st;
        for (auto& car : cars) {
            if (st.empty() || car.second > st.top()) {
                st.push(car.second);
            }
        }
        return st.size();
    }
};
