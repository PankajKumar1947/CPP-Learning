//Q5. In Q4., define a friend operator + to concatenate two array objects.
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
      friend Array operator+(Array, Array);
};
Array operator+(Array A,Array B)
{
    Array temp(A.size+B.size);
    int i, j, k;
    for(i=0,j=0,k=0;i<temp.size;i++)
    {
        if(j<A.size)
        {
            temp[i]=A[j];
            j++;
        }
        else
        {
            temp[i]=B[k];
            k++;
        }
    }
    return temp;
}

int main()
{
    
    return 0;
}