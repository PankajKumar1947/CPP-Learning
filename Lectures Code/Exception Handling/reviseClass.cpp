#include<stdio.h>
#include<iostream>
#include<fstream>
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
        cout<<"Enter bookid, title and price :";
        cin>>bookid;
        if(bookid<0)
          bookid=-bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;
       }
       void store();
       void viewAllBook();
};
void Book::store()
{
    ofstream fout;
    fout.open("bookfile2.txt",ios::app|ios::binary);
    fout.write((char*)this, sizeof(*this));
    fout.close();
}
void Book::viewAllBook()
{
    ifstream fin;
    fin.open("bookfile2.txt",ios::app|ios::binary);
    if(!fin)
      cout<<"File not found";
    else
    {
        fin.read((char*)this,sizeof(*this));
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
    b1.inputBook();
    // b1.displayBook();
    b1.store();
    b1.viewAllBook();
    return 0;

}