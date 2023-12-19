#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int* data;
    int size;

public:
    Array(int size);
    Array(const Array& other);
    ~Array();

    int& operator[](int index);
    void operator()(int value);
    operator int() const;
    operator const char* () const;
};

#endif
