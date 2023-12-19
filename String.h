#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {
private:
    char* data;
    int length;

public:
    String(const char* str);

    char operator[](int index) const;

    int operator()(char ch) const;

    operator int() const;

    ~String();
};

#endif  // STRING_H
