// Define a class Employee with empid, name and salary as instance variables. 
// Also provide instance methods to input and display Employee record.
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<fstream>
using namespace std;

class Employe
{
    private:
      int empid;
      char name[100];
      float salary;
    public:
      void input()
      {
        cout<<"Enter Employe id, name and salary"<<endl;
        cin>>empid;
        cin.ignore();
        cin.getline(name,100);
        cin>>salary;
      }
      void display()
      {
        cout<<empid<<" "<<name<<" "<<salary<<endl;
      }
      void store();
      void viewAllRecords();
      void search();
      void editData();

};
// member function to store new employee record in file
void Employe::store()
{
    ofstream fout;
    fout.open("employeFile.txt",ios::app |ios::binary);
    fout.write((char*)this, sizeof(*this));
    fout.close();
}
// member function to print all employee records stored in a file
void Employe::viewAllRecords()
{
    ifstream fin;
    fin.open("employeFile.txt",ios::in|ios::binary);
    if(!fin)
       cout<<"File not found"<<endl;
    else
    {
        fin.read((char*)this, sizeof(*this));
        while(!fin.eof())
        {
            display();
            fin.read((char*)this, sizeof(*this));
        }
    }
    fin.close();
}
// member function to search employee record;
void Employe::search()
{
    int eid;
    cout<<"Enter employee id :  ";
    cin>>eid;
    ifstream fin;
    fin.open("employeFile.txt",ios::in|ios::binary);
    fin.read((char*)this, sizeof(*this));
    while(!fin.eof())
    {
        if(empid==eid)
        {
            display();
            break;
        }
        else
           fin.read((char*)this, sizeof(*this));
    }
    if(fin.eof())
      cout<<"Employee not Found"<<endl;
    fin.close();
}
// member function to edit employee data.
void Employe::editData()
{
    int id;
    cout<<"Enter Employee id "<<endl;
    cin>>id;
    ifstream fin;
    fin.open("employeFile.txt",ios::in|ios::binary);
    fin.read((char*)this, sizeof(*this));
    while(!fin.eof())
    {
        if(empid==id)
        {
            cout<<"Enter new name: ";
            cin.ignore();
            cin.getline(name,100);
            cout<<"Enter new Salary:  ";
            cin>>salary;
            break;
        }
        else
          fin.read((char*)this,sizeof(*this));
    }
    if(fin.eof())
      cout<<"Employee not found"<<endl;
    fin.close();    
}
int menu()
{
    int choice;
    cout<<"\n--------------------------------"<<endl;
    cout<<"1. Store new Employe Records:"<<endl;
    cout<<"2. View Employee Records: "<<endl;
    cout<<"3. Search Employee Records: "<<endl;
    cout<<"4. Edit data of Employee: "<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"--------------------------------"<<endl;

    cout<<"--------------------------------"<<endl;
    cout<<" Enter your choice:  ";
    cin>>choice;
    cout<<"--------------------------------"<<endl;
    return choice;
}
int main()
{
    Employe e;
    while(true)
    {
        switch(menu())
        {
            case 1:
              e.input();
              e.store();
              break;

            case 2:
              cout<<"\nEmpid | Name  | Salary"<<endl;
              cout<<"-----  ----    ----"<<endl;
              e.viewAllRecords();
              break;

            case 3:
              e.search();
              break;

            case 4:
              e.editData();
              break;
            case 5:
              exit(0);
            default:
              cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}