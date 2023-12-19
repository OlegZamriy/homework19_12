
#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom);

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    int getNumerator() const;
    int getDenominator() const;
};

#endif  // FRACTION_H
