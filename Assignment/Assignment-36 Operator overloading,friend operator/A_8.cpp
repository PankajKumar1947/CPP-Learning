/*Q8. Create a Coordinate class with 2 instance variables x and y . 
Overlaod comma operator such that when you write c3=(c1, c2) then c2 is assigned to c3.
Where c1,c2, and c3 are objects of 3D coordinate class.
*/
#include<iostream>
using namespace std;
class Coordinate
{
    private:
      int x,y;
    public:
      void setValues(int a, int b)
      {
        x=a;
        y=b;
      }
      void showValues()
      {
        cout<<"x="<<x<<" y="<<y<<endl;
      }
      Coordinate operator,(Coordinate);
};
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
    c1.setValues(0,0);
    c2.setValues(1,1);
    c3=(c1,c2);
    c3.showValues();
    return 0;
}