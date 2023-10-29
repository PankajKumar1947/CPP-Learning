//1. Define a function to check whether a given number is a prime or not.

#include<iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
           return false;
    }
    return true;
}

int main()
{
    int x=9;
    if(isPrime(x))
      cout<< x<<" is prime numbers";
    else
        cout<<x<<" is not prime number.";
    return 0;
}