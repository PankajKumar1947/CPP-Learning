/*Q7. Define a class Integer with instance variable of type int. 
Provide a friend logical opeartors not!.
Also define a friend operator == to compare two Integer objects.
*/
#include<iostream>
using namespace std;

class Integer
{
    private:
      int x;
    public:
      void setData(int y){x=y;}
      void showData()
      {
        cout<<"x="<<x;
      }    
      friend bool operator!(Integer);
      friend bool operator==(Integer,Integer);
};
bool operator!(Integer I)
{
    Integer temp;
     if(I.x!=0)
       return false;
     else 
      return true;
}
bool operator==(Integer i1, Integer i2)
{
    if(i1.x==i2.x)
      return true;
    else
     return false;
}

int main()
{
    Integer in1,in2;
    in1.setData(5);
    in2.setData(5);
    
    if(in1==in2)
      cout<<"true";
    else
     cout<<"false";
  return 0;
}