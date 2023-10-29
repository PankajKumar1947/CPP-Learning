/*Q3. In Question-2, over load operator = to perform copy of Time object.
*/
#include<iostream>
using namespace std;

class Time
{
    private:
     int hr, min, sec;
    public:
     friend istream& operator>>(istream &, Time &);
     friend ostream& operator<<(ostream &, Time);
     Time operator=(Time);
};
istream& operator>>(istream &din, Time &t)
{
    din>>t.hr>>t.min>>t.sec;
    return din;
}
ostream& operator<<(ostream &dout, Time t)
{
    dout<<t.hr<<"hr "<<t.min<<"min "<<t.sec<<"sec"<<endl;
}
Time Time::operator=(Time t)
{
    hr=t.hr;
    min=t.min;
    sec=t.sec;
    return *this;
}

int main()
{
    Time t1,t2,t3;
    cout<<"Enter Time (hr: min: sec): ";
    cin>>t1;
    cout<<t1;
    t2=t1;
    cout<<t2;
    return 0;
}