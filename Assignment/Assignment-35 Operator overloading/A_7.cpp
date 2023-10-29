/*Q7. Define a C++ class fraction.
class Fraction
{
    long numerator;
    long denumerator;
  public:
    Fraction (long n=0, long d=0);
};
Define an operator + to add fraction object.
*/
#include<iostream>
using namespace std;
int lcm(int, int);

class Fraction
{
  public:
    long numerator;
    long denumerator;
  public:
  void setValues(int n,int d)
  {
    numerator=n;
    denumerator=d;
  }
  void getValues()
  {
    cout<<"numerator="<<numerator<<" denumerator="<<denumerator<<endl;
  }
    Fraction operator+(Fraction);
};
int lcm(int a, int b)
{
  int L;
  for(L=a>b?a:b;L<=a*b;L--)
  {
    if(L%a==0 && L%b==0)
    return L;
  }
}
Fraction Fraction::operator+(Fraction F)
{
  Fraction temp;
  int l=lcm(denumerator,F.denumerator);
  temp.numerator=(numerator*l/denumerator)+(F.numerator*l/F.denumerator);
  temp.denumerator=l;
  return temp;
}

int main()
{
  Fraction f1,f2,f3;
  int n1,n2,d1,d2;
  cout<<"Enter numerator and denumerator of first fraction :";
  cin>>n1>>d1;
  f1.setValues(n1,d1);
  cout<<"Enter numerator and denumerator of second fraction :";
  cin>>n2>>d2;
  f2.setValues(n2,d2);
  cout<<"First fraction is :"<<endl;
  f1.getValues();
  cout<<"Second fraction is :"<<endl;
  f2.getValues();
  f3=f1+f2;
  cout<<"Added fraction is :"<<endl;
  f3.getValues();
  return 0;
}
