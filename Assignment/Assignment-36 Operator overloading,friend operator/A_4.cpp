/*Q4. Consider the following class Array
class Array
{
    int *p;
    int size;
    public:
     //methods
};
Define operator = to perform deep copy of Array objects
*/
#include<iostream>
using namespace std;
class Array
{
      int *p;
      int size;
    public:
      Array(int s)
      {
        size=s;
        p=new int[s];
      }
      Array(Array &A)
      {
        size=A.size;
        p=new int[size];
        for(int i=0;i<size;i++)
           p[i]=A.p[i];
      }     
      ~Array()
      {
        delete []p;
      }
      int& operator[](int index)
      {
        if(index>=size)
        {
            cout<<"Array index out of bound";
            throw 1;
        }
        return p[index];
      }
};
int main()
{
    
    return 0;
}