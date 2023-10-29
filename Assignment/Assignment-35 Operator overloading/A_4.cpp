/*Q4. In Question-2, oveload + operator to add two time objects.
*/
#include<iostream>
using namespace std;

class Time 
{
    private:
     int hr,min, sec;
    public:
     void setValues(int x, int y, int z)
     {
        hr=x;
        min=y;
        sec=z;
     }
     void ShowTime()
     {
        cout<<hr<<":"<<min<<":"<<sec;
     }
     Time operator+(Time);

     void normalisation()
     {
        min=min+sec/60;
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;
     }
};

Time Time::operator+(Time t)
{
    Time temp;
    temp.hr=hr+t.hr;
    temp.min=min+t.min;
    temp.sec=sec+t.sec;
    return temp;
}

int main()
{
    int hr1,min1,sec1,hr2,min2,sec2;
    Time t1,t2,t3;
    cout<<"Enter Time-1 in (Hr:Min:Sec)"<<endl;
    cin>>hr1>>min1>>sec1;
    cout<<"Enter Time-1 in (Hr:Min:Sec)"<<endl;
    cin>>hr2>>min2>>sec2;
    t1.setValues(hr1,min1,sec1);
    t2.setValues(hr2,min2,sec2);
    cout<<endl;
    cout<<"First time: ";
    t1.ShowTime();
    cout<<endl;
    cout<<"Second time: ";
    t2.ShowTime();
    cout<<endl;
    t3=t1+t2;
    cout<<"Added time: ";
    t3.ShowTime();
    cout<<endl;
    t3.normalisation();
    cout<<"Added time(normalised): ";
    t3.ShowTime();
    return 0;
}