//Q1. Define a class Complex to represent a complex number. Declare instance member variable to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.
#include<iostream>
using namespace std;

class Complex
{
    private:
       int real, imag;
    public:
       void setComplex(int x,int y)
       {
        cout<<"Enter real and imaginary part of a complex number:\n";
        cin>>x>>y;
        real=x;
        imag=y;
       }
       void showComplex()
       {
        cout<<"real="<<real<<"  imaginary="<<imag;
       }
};

int main()
{
    Complex c;
    int a,b;
    c.setComplex(a,b);
    c.showComplex();
    return 0;
}