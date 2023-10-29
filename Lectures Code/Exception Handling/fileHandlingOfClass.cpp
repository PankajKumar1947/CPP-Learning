#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

class Book
{
    private:
      int bookid;
      char title[20];
      float price;
    public:
      void displayBook()
      {
        cout<<bookid<<" "<<title<<" "<<price<<endl;
      }
      void inputBook()
      {
        cout<<"Enter bookid, title and price:";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;
      }
      void storeBook();
      void viewAllBook();
};
void Book::storeBook()
{
    ofstream fout;
    fout.open("file2.txt",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void Book::viewAllBook()
{
    ifstream fin;
    fin.open("file2.txt",ios::app|ios::binary);
    if(!fin)
      cout<<"File not Found";
    else
    {
        fin.read((char*)this, sizeof(*this));
        while(!fin.eof())
        {
            displayBook();
            fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}

int main()
{
    Book b1;
    int choice;
    cout<<"\n1.Store new Book";
    cout<<"\n2.View All Book Records";
    cout<<"\n3.Exit";
    
    while(true)
    {
    cout<<"\n\nEnter your choice";
    cin>>choice;
     switch(choice)
     {
        case 1:
         b1.inputBook();
         b1.storeBook();
         break;
        
        case 2:
         b1.viewAllBook();
         break;
        
        case 3:
         exit(0);

        default:
         cout<<"Invalid choice";
     }
    }
    
    return 0;
}
