
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double realPart, double imaginaryPart);

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    double getReal() const;
    double getImaginary() const;
};

#endif  // COMPLEX_H
