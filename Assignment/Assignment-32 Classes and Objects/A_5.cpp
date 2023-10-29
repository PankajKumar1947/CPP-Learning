// Q5. Definea a class Circle with radius as its property. Provide setRadius() and getRadius() methods. Also define methods to return area and circumference of circle..
#include<iostream>
using namespace std;

class Circle{
        private:
         int radius;
        public:
         void setRadius(int r)
         {
            cout<<"Enter Radius of a circle:\n";
            cin>>r;
            radius=r;
         }
         int getRadius()
         {
            return radius;
         }
         float getArea()
         {
            return 3.14*radius*radius;
         }
         float getCircumference()
         {
            return 2*3.14*radius;
         }
};

int main()
{
    Circle c;
    int rad;
    c.setRadius(rad);
    cout<<"Radius of given circle: "<<c.getRadius()<<endl;
    cout<<"Area of given circle  : "<<c.getArea()<<endl;
    cout<<"Circumference of given circle : "<<c.getCircumference();
}