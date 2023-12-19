#ifndef STRING_INTERSECTION_H
#define STRING_INTERSECTION_H

#include <string>

class StringIntersection {
private:
    std::string value;

public:
    StringIntersection(const std::string& str);
    StringIntersection operator*(const StringIntersection& other) const;
    void display() const;
};

#endif // STRING_INTERSECTION_H
