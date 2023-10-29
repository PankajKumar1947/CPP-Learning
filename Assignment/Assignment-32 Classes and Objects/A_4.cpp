//Q4. Int Q-3, define a methods to display date in the following pattern..
// 1.) 31-12-2022
// 2.) 31-dec-2022
#include<iostream>
using namespace std;

class Date
{
    private:
      int d,m,y;
    public:
      void setDate(int a,int b,int c)
      {
        cout<<"Enter date in format day, month, year:\n";
        cin>>a>>b>>c;
        d=a;
        m=b;
        y=c;
      }
      void showDate1()
      {
        cout<<"\n"<<d<<"-"<<m<<"-"<<y;
      }
      void showDate2()
      {
        char *months[]={"jan",
                        "Feb",
                        "mar",
                        "Apr",
                        "Jun",
                        "Jul",
                        "Aug",
                        "Sep",
                        "Oct",
                        "Nov",
                        "Dec"};
        cout<<"\n"<<d<<"-"<<months[m-1]<<"-"<<y;
      }
};

int main()
{
    Date d;
    int d1,m1,y1;
    d.setDate(d1,m1,y1);
    d.showDate1();
    d.showDate2();
    return 0;
}