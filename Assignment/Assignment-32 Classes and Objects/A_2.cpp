//Q2. Define a class Time to represent Time (like 3hr 45min 20sec). Declare appropriate number of instance member variables and also define instance member functions to setValues for time and display Values of time..
#include<iostream>
using namespace std;

class Time{
    private:
      int hr,min,sec;
    public:
      void setTime(int x,int y, int z)
      {
        cout<<"Enter time in hr, min and sec:\n";
        cin>>x>>y>>z;
        hr=x;
        min=y;
        sec=z;
      }
      void showTime()
      {
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec ";
      }
};
int main()
{
    Time t;
    int a,b,c;
    t.setTime(a,b,c);
    t.showTime();
    return 0;   
}