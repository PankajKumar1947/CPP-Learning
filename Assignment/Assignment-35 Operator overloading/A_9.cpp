/*Q9. Consider a class Distance
class Distance
{
     int km, m,cm;
     public:
      //methods:
};
Overload the operator+ to add two distance objects.
*/
#include<iostream>
using namespace std;

class Distance
{
    int km, m, cm;
    public:
      void setValues(int x,int y, int z)
      {
        km=x;
        m=y;
        cm=z;
      }
      void getValues()
      {
        cout<<km<<"km "<<m<<"m "<<cm<<"cm"<<endl;
      }
      Distance operator+(Distance);
      void normlisation()
      {
        m=m+cm/100;
        cm=cm%100;
        km=km+m/100;
        m=m%100;

      }
};
Distance Distance::operator+(Distance D)
{
    Distance temp;
    temp.km=km+D.km;
    temp.m=m+D.m;
    temp.cm=cm+D.cm;
    return temp;
}
int main()
{
    Distance d1,d2,d3;
    int km1,km2,m1,m2,cm1,cm2;
    cout<<"Enter First distance (Km:M:Cm)"<<endl;
    cin>>km1>>m1>>cm1;
    d1.setValues(km1,m1,cm1);
    cout<<"Enter Second distance (Km:M:Cm)"<<endl;
    cin>>km2>>m2>>cm2;
    d2.setValues(km2,m2,cm2);
    cout<<"First distance is: ";
    d1.getValues();
    cout<<"Second distance is: ";
    d2.getValues();
    d3=d1+d2;
    cout<<"Added distance is: ";
    d3.getValues();
    d3.normlisation();
    cout<<"Added distance(normalised): ";
    d3.getValues();
    return 0;
}