//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;


//method -1
double xRaisedY(double x, double y)
{
    double xRaised=1;
    if(y>=0)
    {
        while(y)
        {
            xRaised=xRaised*x;
            y--;
        }
    }
    else
    {
        double z=-y;
        while(z)
        {
            xRaised=xRaised/x;
            z--;
        }
    }
    return xRaised;
    
}

//method 2:using recursion
double power(double x,int y)
{
    if(y>0)
     return x*power(x,y-1);
    else if(y<0)
      return 1/x*power(x,y+1);
    else
      return 1;
}

int main()
{
    double x=2;
    double y=-5;

    cout<< x<<" to the power "<<y<<" is "<<xRaisedY(x,y)<<endl;
    cout<< x<<" to the power "<<y<<" is "<<power(x,y);
    return 0;
}