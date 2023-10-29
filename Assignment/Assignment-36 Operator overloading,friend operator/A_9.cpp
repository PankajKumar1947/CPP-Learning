//Q9. In Q.8, provide overlaoded insertion and extraction operators.
#include<iostream>
using namespace std;
class Coordinate
{
    private:
      int x,y;
    public:
      Coordinate operator,(Coordinate);
      friend istream& operator>>(istream &, Coordinate &);
      friend ostream& operator<<(ostream &, Coordinate);
};

istream & operator>>(istream &din, Coordinate &c)
{
    din>>c.x>>c.y;
    return din;
}
ostream & operator<<(ostream &dout, Coordinate c)
{
    dout<<"x="<<c.x<<" y="<<c.y<<endl;
    return dout;
}
Coordinate Coordinate::operator,(Coordinate c)
{
    Coordinate temp;
    temp.x=c.x;
    temp.y=c.y;
    return temp;
}
int main()
{
    Coordinate c1,c2,c3;
    cout<<"Enter a Coordinate in C1"<<endl;
    cin>>c1;
    cout<<"Enter a Coordinate in C2"<<endl;
    cin>>c2;
    cout<<"Coordinate in C3"<<endl;
    c3=(c1,c2);
    cout<<c3;
    return 0;
}