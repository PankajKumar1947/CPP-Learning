// Q3. Define a class Date to represent date like (d=31,m=12,y=2022). Declare appropriate number number of instance member variables and also define instance member functions to set date and get date..
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
      void showDate()
      {
        cout<<"\n"<<d<<"/"<<m<<"/"<<y;
      }
};

int main()
{
    Date d;
    int d1,m1,y1;
    d.setDate(d1,m1,y1);
    d.showDate();
    return 0;
}