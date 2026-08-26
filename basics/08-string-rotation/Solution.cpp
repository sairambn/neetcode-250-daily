#include <string>

bool isRotation(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) return false;
    return (s1 + s1).find(s2) != std::string::npos;
}
