//In Q1, provide unary friend operator - to negate the real and imaginary part of a complex number.
#include<iostream>
using namespace std;
 
class Complex
{
    private:
     int real, imag;
    public:
     void setData(int x, int y){real=x;imag=y;}
     void showData()
     {
        cout<<"real="<<real<<" imaginary="<<imag<<endl;
     }
     friend Complex operator-(Complex);
};
Complex operator-(Complex c)
{
    Complex temp;
    temp.real=-c.real;
    temp.imag=-c.imag;
    return temp;
}
int main()
{
    Complex C1,C2;
    C1.setData(4,6);
    C1.showData();
    C2=-C1;
    C2.showData();
}