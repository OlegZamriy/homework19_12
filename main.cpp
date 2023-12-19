
#include "Complex.h"
#include <iostream>

int main() {
    Complex complex1(1.0, 2.0);
    Complex complex2(3.0, 4.0);

    Complex resultAdd = complex1 + complex2;
    Complex resultSubtract = complex1 - complex2;
    Complex resultMultiply = complex1 * complex2;
    Complex resultDivide = complex1 / complex2;

    std::cout << "Addition: " << resultAdd.getReal() << " + " << resultAdd.getImaginary() << "i" << std::endl;
    std::cout << "Subtraction: " << resultSubtract.getReal() << " + " << resultSubtract.getImaginary() << "i" << std::endl;
    std::cout << "Multiplication: " << resultMultiply.getReal() << " + " << resultMultiply.getImaginary() << "i" << std::endl;
    std::cout << "Division: " << resultDivide.getReal() << " + " << resultDivide.getImaginary() << "i" << std::endl;

    return 0;
}
