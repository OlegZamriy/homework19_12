#include "array.h"
#include <iostream>

int main() {
    Array arr(5);

    arr[2] = 42;
    std::cout << "Element at index 2: " << arr[2] << std::endl;

    arr(10);
    std::cout << "Array after increasing by 10:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int sum = static_cast<int>(arr);
    std::cout << "Sum of elements: " << sum << std::endl;

    const char* str = static_cast<const char*>(arr);
    std::cout << "Array as string: " << str << std::endl;

    return 0;
}
