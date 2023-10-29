/*Q.10 Define a class Student with roll_no, name and age as instance variables.
Create setStudent() and showStudent() methods in the class. Overload operator == to compare two Student object.
*/
#include<iostream>
using namespace std;

class Student
{
    private:
      int roll_no;
      string name;
      int age;
    public:
      void setStudent(int r,string n, int a)
      {
        roll_no=r;
        name=n;
        age=a;
      }
      void showStudent()
      {
        cout<<roll_no<<" "<<name<<" "<<age<<endl;
      }
      bool operator==(Student);
};

bool Student::operator==(Student s)
{
    if(roll_no==s.roll_no || name==s.name && age==s.age)
      return true;
    else
     return false;   
}
int main()
{
   Student s[2];
   int roll[2], age[2];
   string nam[2];
   for(int i=0;i<=1;i++)
   {
      cout<<"Enter Roll, Name, age of Student-"<<i<<endl;
      cin>>roll[i];
      cin.ignore();
      cin>>nam[i];
      cin>>age[i];
   }
   for(int i=0;i<=1;i++)
   {
    s[i].setStudent(roll[i],nam[i],age[i]);
    s[i].showStudent();
   }
  if(s[0]==s[1])
    cout<<"true"<<endl;
  else
    cout<<"false"<<endl;
   return 0;
}