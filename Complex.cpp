
#include "Complex.h"

Complex::Complex(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imaginary * other.imaginary;
    return Complex((real * other.real + imaginary * other.imaginary) / denominator,
        (imaginary * other.real - real * other.imaginary) / denominator);
}

double Complex::getReal() const {
    return real;
}

double Complex::getImaginary() const {
    return imaginary;
}
