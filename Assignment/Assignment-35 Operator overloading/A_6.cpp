/*Q6. Consider following class Numbers
class Numbers
{
    int x,y,z;
    public:
      //methods
};
Overload the operator unary minus(-) to negate the numbers.
*/
#include<iostream>
using namespace std;

class Numbers
{
    int x,y,z;
    public:
       void SetValues(int a,int b,int c)
      {
        x=a;
        y=b;
        z=c;              
      }
      void getValues()
      {
        cout<<"x="<<x<<" y="<<y<<" z="<<z;
      }
      Numbers operator-();
};
Numbers Numbers::operator-()
{
  Numbers temp;
  temp.x=-x;
  temp.y=-y;
  temp.z=-z;
  return temp;
}
int main()
{
  Numbers n1,n2;
  int a,b,c;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;
  n1.SetValues(a,b,c);
  cout<<"Negation of three numbers: "<<endl;
  n2=-n1;
  n2.getValues();
  return 0;
}