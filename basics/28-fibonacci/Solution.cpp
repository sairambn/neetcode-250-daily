#include <vector>

std::vector<int> firstFiveFibonacci() {
    std::vector<int> result;
    int a = 0, b = 1;
    for (int i = 0; i < 5; ++i) {
        result.push_back(a);
        int next = a + b;
        a = b;
        b = next;
    }
    return result;
}
