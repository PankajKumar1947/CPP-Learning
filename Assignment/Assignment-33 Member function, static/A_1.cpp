/*Q.1 Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts. 
Also define following member functions.
1. void setData(int, int)
2. void showData()
3. Complex add(Complex)
4. Complex subtract(Complex)
5. Complex multiply(Complex)
*/
#include<iostream>
using namespace std;

class Complex
{
    private:
      int a,b;
    public:
    //1. void setData(int, int)
      void setData(int x,int y)
      {
        a=x;
        b=y;
      }
    //2. void showData()
      void showData()
      {
        cout<<"\nreal="<<a<<" imaginary="<<b<<endl;
      }
    //3. Complex add(Complex)
      Complex add(Complex C)
      {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
      }
    //4. Complex subtract(Complex)
      Complex subtract(Complex C)
      {
        Complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return temp;
      }
    //5. Complex multiply(Complex)
      Complex multiply(Complex C)
      {
        Complex temp;
        temp.a=a*C.a-b*C.b;
        temp.b=a*C.a+b*C.a;
        return temp;
      }
};

int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1.add(c2);
    c4=c1.subtract(c2);
    c5=c1.multiply(c2);
    cout<<"First Complex number=";
    c1.showData();
    cout<<"Second Complex number=";
    c2.showData();
    cout<<"Added Complex number=";
    c3.showData();
    cout<<"Subtracted Complex number=";
    c4.showData();
    cout<<"Multiplied Complex number=";
    c5.showData();
    return 0;
}