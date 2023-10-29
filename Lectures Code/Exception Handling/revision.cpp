#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

void writing()
{
    ofstream fout;
    fout.open("revise.txt",ios::out);
    char nam[]="Pankaj Kumar";
    fout<<nam;
    fout.close();
}
void reading()
{
    ifstream fin;
    char name[100];
    fin.open("revise.txt",ios::in);
    if(!fin)
      cout<<"File not found";
    else
    {
        // fin>>name;----->fin uses blank spaces as delimiters. so use getline
        fin.getline(name,100);
        cout<<name;
    }
    // This method will be failed when the size of data is greater than size of name variable. so use below method
}
// this method is usefull to bring out the data of whatever the size .
void readingALL()
{
    ifstream fin;
    char ch;
    fin.open("revise.txt",ios::in);
    if(!fin)
    {
        cout<<"File not found";
    }
    else{
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
    }
    fin.close();
}

void append()
{
    ofstream fout;
    fout.open("revise.txt",ios::app);
    fout<<"Yadav";
    fout.close();
}


int main()
{
    writing();
    readingALL();
    append();
    readingALL();
    return 0;
}