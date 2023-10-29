//6. Define a function to swap data of two int variables using call by refernce.
#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}

int main()
{
    int x=2;
    int y=4;
    cout<<"Before Swapping: x="<<x<<" y="<<y<<endl;
    swap(x,y);
    cout<<"After Swapping: x="<<x<<" y="<<y<<endl;
    return 0;
}