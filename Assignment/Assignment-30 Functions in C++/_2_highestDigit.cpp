//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;

int highestDigit(int num)
{
    int x=num;
    int maxDigit=INT32_MIN;
    while(num)
    {
        x=num%10;
        if(x>maxDigit)
            maxDigit=x;
        num=num/10;
    
    }
    return maxDigit;
}

int main()
{
    int x=3598743;
    cout<<"Highest digit in "<<x<< " is "<<highestDigit(x);
    return 0;
}