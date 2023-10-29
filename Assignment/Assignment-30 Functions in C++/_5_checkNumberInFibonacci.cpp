//5. Define a function to check whether a given number is a term in a fibonacci series or not.
#include<iostream>
using namespace std;

bool isInFib(int num)
{
    int a=-1,b=1,c=0;
    while(c<num)
    {
        c=a+b;
        if(num==c)
         return true;
        a=b;
        b=c;
    }
    return false;
}

int main()
{
    int x=10;
    if(isInFib(x))
      cout<<x<<" is a term of a fibonacci series.";
    else 
       cout<<x<<" is not a term of a fibonacci series.";
    return 0;
}