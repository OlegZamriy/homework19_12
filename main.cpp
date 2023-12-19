#include "String.h"
#include <iostream>

int main() {
    const char* str = "Hello, World!";
    String myString(str);
    std::cout << "Character at index 7: " << myString[7] << std::endl;

    char searchChar = 'W';
    int charIndex = myString(searchChar);
    if (charIndex != -1) {
        std::cout << "Character '" << searchChar << "' found at index: " << charIndex << std::endl;
    }
    else {
        std::cout << "Character '" << searchChar << "' not found." << std::endl;
    }

    int strLength = static_cast<int>(myString);
    std::cout << "String length: " << strLength << std::endl;

    return 0;
}
