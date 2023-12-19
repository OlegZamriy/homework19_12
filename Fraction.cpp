#include "Fraction.h"

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

Fraction Fraction::operator+(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator + other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

Fraction Fraction::operator-(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator - other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

Fraction Fraction::operator*(const Fraction& other) const {
    int resultNumerator = numerator * other.numerator;
    int resultDenominator = denominator * other.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

Fraction Fraction::operator/(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator;
    int resultDenominator = denominator * other.numerator;
    return Fraction(resultNumerator, resultDenominator);
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}
