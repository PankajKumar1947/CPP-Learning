/*Q2. Define a class Time to represent a time with instance variable hr,min,sec to store hour, minute and second. 
Also define following member functions..
1. void setTime(int , int ,int)
2. void showTime()
3. void normalize()
4. Time add(Time)
5. bool is_greater(Time)
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
        cout<<"\n"<<hr<<":"<<min<<":"<<sec<<endl;
     }
     void normalize()
     {
        min=min+sec/60;
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;
     }
     Time add(Time t)
     {
        Time temp;
        temp.hr=hr+t.hr;
        temp.min=min+t.min;
        temp.sec=sec+t.sec;
        return temp;
     }
     bool is_greater(Time t)
     {
        Time temp;
        if(hr>t.hr)
           return true;
        else if(hr<t.hr)
          return false;
        else if(min>t.min)
          return true;
        else if(min<t.min)
          return false;
        else if(sec>t.sec)
          return true;
        else
          return false;
     }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(2,30,45);
    t2.setTime(4,40,45);
    t3=t1.add(t2);
    cout<<"Added time :";
    t3.showTime();
    t3.normalize();
    cout<<"Added time after normalization:";
    t3.showTime();
    return 0;
}