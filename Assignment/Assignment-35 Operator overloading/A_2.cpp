/* Q2. Create a class Time which contains hour, min and second as fields. 
Overload greater than (>) operator to compare two time objects.
*/
#include<iostream>
using namespace std;

class Time
{
    private:
     int hour,min, second;
    public:
     Time(){}
     Time(int hr, int mn, int s):hour(hr),min(mn),second(s)
     {}
    bool operator >(Time);
};
bool Time::operator>(Time t)
{
    if(hour>t.hour)
     return true;
    else if(hour<t.hour)
     return false;
    else if(min>t.min)
     return true;
    else if(min<t.min)
    return false;
    else if(second>t.second)
     return true;
    else
     return false;
}
int main()
{
    int h1,m1,s1;
    int h2,m2,s2;
    cout<<"Enter First Time(Hr:Min:Sec)"<<endl;
    cin>>h1>>m1>>s1;
    cout<<"Enter Second Time(Hr:Min:Sec)"<<endl;
    cin>>h2>>m2>>s2;
    Time t1(h1,m1,s1), t2(h2,m2,s2),t3;
    t1>t2;
    return 0;
}