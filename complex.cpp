#include "complex.h"
#include <cmath>
using namespace std;
Complex::Complex()
{
    cout<<"Constructor fara parametri!!"<<endl;
    real=0;
    imag=0;
}
Complex::Complex(float _re,float _imag):real(_re),imag(_imag)
{
    cout<<"Constructor cu parametri!!"<<endl;
    //real=_re;
    //imag=_imag;
}

Complex::~Complex()
{
    cout<<"Destructor"<<endl;
}
ostream& operator<<(ostream& c,const Complex& ob)
{
    c<<ob.real;
    ob.imag>=0?c<<"+"<<ob.imag<<"i"<<endl : c<<ob.imag<<"i"<<endl;
    return c;
}

istream& operator>>(istream& c,Complex& ob)
{
    cout<<"Dati valoarea reala: ";
    c>>ob.real;
    cout<<"Dati valoarea imaginara: ";
    c>>ob.imag;
}
Complex& Complex::operator=(Complex& ob)
{
    this->real=ob.real;
    this->imag=ob.imag;
}

///operatori + supradefiniti
Complex Complex::operator+(Complex& ob)
{
    Complex r;
    r.real=this->real+ob.real;
    r.imag=this->imag+ob.imag;
    return r;
}
Complex Complex::operator+(const float& f)
{
    Complex r;
    r.real=this->real+f;
    r.imag=this->imag;
    return r;
}
Complex operator+(const float& f, Complex& ob)
{
    Complex r;
    r.real=ob.real+f;
    r.imag=ob.imag;
    return r;
}

///operatori - supradefiniti
Complex Complex::operator-(Complex& ob)
{
    Complex r;
    r.real=this->real-ob.real;
    r.imag=this->imag-ob.imag;
    return r;
}
Complex Complex::operator-(const float& f)
{
    Complex r;
    r.real=this->real-f;
    r.imag=this->imag;
    return r;
}
Complex operator-(const float& f, Complex& ob)
{
    Complex r;
    r.real=ob.real-f;
    r.imag=ob.imag;
    return r;
}

///operatori * supradefiniti
Complex Complex::operator*(Complex& ob)
{
    Complex r;
    r.real=this->real*ob.real-this->imag*ob.imag;
    r.imag=this->real*ob.imag+this->imag*ob.real;
}
Complex Complex::operator*(const float& f)
{
    Complex r;
    r.real=this->real*f;
    r.imag=this->imag*f;
    return r;
}
Complex operator*(const float& f, Complex& ob)
{
    Complex r;
    r.real=ob.real*f;
    r.imag=ob.imag*f;
    return r;
}
Complex Complex::operator/(Complex& ob)
{
    Complex r;
    r.real=(this->real*ob.real+this->imag*ob.imag)/(pow(ob.real,2)+pow(ob.imag,2));
    r.imag=(this->imag*ob.real-this->real*ob.imag)/(pow(ob.real,2)+pow(ob.imag,2));
    return r;
}
Complex Complex::operator/(const float& f)
{
    Complex r;
    r.real=this->real/f;
    r.imag=this->imag/f;
    return r;
}


float Complex::operator++()
{
    return sqrt(pow(this->real,2)+pow(this->imag,2));
}
