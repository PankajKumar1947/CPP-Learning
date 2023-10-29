//Write a c++ program to add all the numbers of an aray of size 10..
#include<iostream>
using namespace std;
int main()
{
    int i, a[30],sum=0;
    cout<<"Enter Numbers"<<endl;
    for(i=0;i<=5;i++)
      cin>>a[i];
    for(i=0;i<=5;i++)
      sum=sum+a[i];
      cout<<sum;
}