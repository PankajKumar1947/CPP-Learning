//Q8. In Question-7, define an operator < to compare two fraction objects.
#include<iostream>
using namespace std;

class Fraction
{
    private:
     int num, denum;
    public:
     void setValues(int x, int y)
     {
        num=x;
        denum=y;
     }
     void getValues()
     {
        cout<<"num="<<num<<" denum="<<denum<<endl;
     }
     Fraction operator<(Fraction);
};
Fraction Fraction::operator<(Fraction F)
{
    if((num*(F.denum))>(denum*(F.num)))
       cout<<num<<"/"<<denum<<" is greater than "<<F.num<<"/"<<F.denum;
    else
      cout<<num<<"/"<<denum<<" is smaller than "<<F.num<<"/"<<F.denum;
}
int main()
{
    Fraction f1,f2;
    int n1,n2,d1,d2;
    cout<<"Enter numerator and denumerator of first fraction"<<endl;
    cin>>n1>>d1;
    f1.setValues(n1,d1);
    cout<<"Enter numerator and denumerator of second fraction"<<endl;
    cin>>n2>>d2;
    f2.setValues(n2,d2);
    f1<f2;
    return 0;
}