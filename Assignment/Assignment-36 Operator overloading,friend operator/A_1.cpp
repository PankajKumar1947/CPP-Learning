/*Q1. Define a class Complex and overloading following operators as a friend.
1. +
2. -
3. *
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
     friend Complex operator+(Complex,Complex);  
     friend Complex operator-(Complex,Complex);
     friend Complex operator*(Complex,Complex); 
};
Complex operator+(Complex C1,Complex C2)
{
    Complex temp;
    temp.real=C1.real+C1.imag;
    temp.imag=C2.real+C2.imag;
    return temp;
}
Complex operator-(Complex C1,Complex C2)
{
    Complex temp;
    temp.real=C1.real-C1.real;
    temp.imag=C2.imag-C2.imag;
    return temp;
}
Complex operator*(Complex C1, Complex C2)
{
    Complex temp;
    temp.real=C1.real*C2.real-C1.imag*C2.imag;
    temp.imag=C1.real*C2.imag+C1.imag*C2.imag;
    return temp;
}

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
    return 0;
}