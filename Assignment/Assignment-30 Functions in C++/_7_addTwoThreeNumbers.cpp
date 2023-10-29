//7.Write a  function using the dafault arguments that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;

int add(int a,int b,int c=0)
{
    return a+b+c;
}
int main()
{
    int x=5;
    int y=3;
    int z=6;
    cout<<"Sum of "<<x<<" and "<<y<<" is "<<add(x,y)<<endl;
    cout<<"Sum of "<<x<<","<<y<<" and "<<z<<" is "<<add(x,y,z);
    return 0;
}