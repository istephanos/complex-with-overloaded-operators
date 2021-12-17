#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex
{
    private:
        float real;
        float imag;
    public:
        Complex();
        Complex(float,float);
        ~Complex();

        friend ostream& operator<<(ostream&, const Complex&);
        friend istream& operator>>(istream&, Complex&);

        Complex& operator=(Complex&);

        Complex operator+(Complex&);
        Complex operator+(const float&);
        friend Complex operator+(const float&,Complex&);

        Complex operator-(Complex&);
        Complex operator-(const float&);
        friend Complex operator-(const float&, Complex&);

        Complex operator*(Complex&);
        Complex operator*(const float&);
        friend Complex operator*(const float&, Complex&);

        Complex operator/(Complex&);
        Complex operator/(const float&);

        float operator++();
};

#endif // COMPLEX_H
