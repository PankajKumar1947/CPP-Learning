/*Q3. In Question-2, oveload pre-increment operator and post-increment operator to increment Time object value by second.
*/
#include<iostream>
using namespace std;

class Time 
{
    private:
     int hr, min , sec;
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
     Time operator++()
     {
        sec++;
        min=min+sec/60;
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;
        return *this;
     }
     Time operator++(int)
     {
        Time temp=*this;
        sec++;//Post Increment
        min=min+sec/60;
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;
        return temp;
     }
};

int main()
{
    Time t1,t2;
    t1.setValues(12,24,29);
    ++t1;
    t1.ShowTime();
    t1++;
    t1.ShowTime();
    return 0;
}