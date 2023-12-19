#include "array.h"
#include <iostream>
#include <cstring>

Array::Array(int size) {
    this->size = size;
    data = new int[size];
    // Ініціалізація масиву, за потреби
}

Array::Array(const Array& other) {
    size = other.size;
    data = new int[size];
    memcpy(data, other.data, size * sizeof(int));
}

Array::~Array() {
    delete[] data;
}

int& Array::operator[](int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

void Array::operator()(int value) {
    for (int i = 0; i < size; ++i) {
        data[i] += value;
    }
}

Array::operator int() const {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }
    return sum;
}

Array::operator const char* () const {
    char* str = new char[size * 2 + 1]; 
    for (int i = 0; i < size; ++i) {
        sprintf_s(str + i * 2, 3, "%02X", data[i]); 
    }
    return str;
}