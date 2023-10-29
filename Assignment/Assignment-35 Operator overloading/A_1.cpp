/*Q1. Define a class Complex with appropriate instance variables and member functions.
Define following operator in tha class.
1. +
2. -
3. *
4. ==
*/
#include<iostream>
using namespace std;

class Complex
{
    private:
     int real, imag;
    public:
     void setData(int x,int y)
     {
        real=x;
        imag=y;
     }
     void ShowData()
     {
        cout<<"real="<<real<<" imag="<<imag<<endl;
     }
     Complex operator+(Complex C)
     {
        Complex temp;
        temp.real=real+C.real;
        temp.imag=imag+C.imag;
         return temp;
     }
     Complex operator-(Complex C)
     {
        Complex temp;
        temp.real=real-C.real;
        temp.imag=imag-C.imag;
        return temp;
     }
     Complex operator*(Complex C)
     {
        Complex temp;
        temp.real=real*C.real-imag*C.imag;
        temp.imag=real*C.imag+imag*C.imag;
        return temp;
     }
     bool operator==(Complex C)
     {
        if(real==C.real && imag==C.imag)
        return true;
        else
        return false;
     }
};
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    int a1,b1,a2,b2;
    cout<<"Enter real and imaginary parts of First Complex numbers:"<<endl;
    cin>>a1>>b1;
    cout<<"Enter real and imaginary parts of Second Complex numbers:"<<endl;
    cin>>a2>>b2;
    c1.setData(a1,b1);
    c2.setData(a2,b2);
    cout<<"First Complex number is :   ";
    c1.ShowData();
    cout<<"Second Complex number is :   ";
    c2.ShowData();
    cout<<"Added Complex number is :   ";
    c3=c1+c2;//c3=c1.operator+(c2)
    c3.ShowData();
    cout<<"Subtracted Complex number is :  ";
    c4=c1-c2;//c4=c1.opertor-(c2)
    c4.ShowData();
    cout<<"Multiplied Complex number is :  ";
    c5=c1*c2;//c5=c1.operator*(c2)
    c5.ShowData();
    if(c1==c2)
     cout<<"entered two complex numbers are equal.";
     else
      cout<<"entered two complex numbers are not equal.";
    return 0;
}