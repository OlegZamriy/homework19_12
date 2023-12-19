#include "string_intersection.h"
#include <iostream>

StringIntersection::StringIntersection(const std::string& str) : value(str) {}

StringIntersection StringIntersection::operator*(const StringIntersection& other) const {
    std::string result;
    for (char ch : value) {
        if (other.value.find(ch) != std::string::npos) {
            result += ch;
        }
    }
    return StringIntersection(result);
}

void StringIntersection::display() const {
    std::cout << value << std::endl;
}
