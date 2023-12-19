
#include "Fraction.h"
#include <iostream>

int main() {
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 4);

    Fraction resultAdd = fraction1 + fraction2;
    Fraction resultSubtract = fraction1 - fraction2;
    Fraction resultMultiply = fraction1 * fraction2;
    Fraction resultDivide = fraction1 / fraction2;

    std::cout << "Addition: " << resultAdd.getNumerator() << "/" << resultAdd.getDenominator() << std::endl;
    std::cout << "Subtraction: " << resultSubtract.getNumerator() << "/" << resultSubtract.getDenominator() << std::endl;
    std::cout << "Multiplication: " << resultMultiply.getNumerator() << "/" << resultMultiply.getDenominator() << std::endl;
    std::cout << "Division: " << resultDivide.getNumerator() << "/" << resultDivide.getDenominator() << std::endl;

    return 0;
}
