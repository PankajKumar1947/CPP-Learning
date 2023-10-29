/*Q2. Define a class Time with appropriate instance variables and member functions.
     Overlaod following operators.
     1. << insertion operator
     2. >> extraction operator
*/
#include<iostream>
using namespace std;

class Time
{
    private:
     int hr, min, sec;
    public:
     void setTime(int x,int y, int z)
     {
        hr=x;
        min=y;
        sec=z;
     }
     void showTime()
     {
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec";
     }
     friend istream& operator>>(istream &, Time &);
     friend ostream& operator<<(ostream &, Time);
};
istream& operator>>(istream &din, Time &t)
{
    din>>t.hr>>t.min>>t.sec;
    return din;
}
ostream& operator<<(ostream &dout, Time t)
{
    dout<<t.hr<<"hr "<<t.min<<"min "<<t.sec<<"sec";
}

int main()
{
    Time t1,t2,t3;
    cout<<"Enter Time: ";
    cin>>t2;
    cout<<t2;
}