// Write a C++ program to find the maximum of two numbers..
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers"<< endl;
    cin>>a>>b;
    if(a>b)
    cout<<a<<" is maximum";
    else
    cout<<b<<" is maximum";
    return 0;
}