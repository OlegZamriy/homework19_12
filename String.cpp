#include "String.h"
#include <cstring>

String::String(const char* str) {
    length = strlen(str);
    data = new char[length + 1];
    strcpy_s(data, length + 1, str);  
}

char String::operator[](int index) const {
    if (index >= 0 && index < length) {
        return data[index];
    }
    else {
        std::cerr << "Index out of bounds!" << std::endl;
        return '\0';  
    }
}

int String::operator()(char ch) const {
    for (int i = 0; i < length; ++i) {
        if (data[i] == ch) {
            return i;
        }
    }
    return -1;
}

String::operator int() const {
    return length;
}

String::~String() {
    delete[] data;
}
