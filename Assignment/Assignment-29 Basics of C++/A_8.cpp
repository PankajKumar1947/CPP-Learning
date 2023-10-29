// Write a C++ program to swap values of two int variables without using third variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<< endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swap values are "<<a<<"  "<<b;
    return 0;
}