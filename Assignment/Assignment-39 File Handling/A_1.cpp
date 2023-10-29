//Q1. Write a c++ program to copy content of file and store in other file.
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void writing()
{
    ofstream fout;
    char str[100];
    cout<<"Enter your Name:";
    cin.getline(str,100);
    fout.open("file1.txt",ios::app|ios::binary);
    fout<<str;
    fout.close();
}
void reading()
{
    ifstream fin;
    fin.open("file1.txt",ios::app|ios::binary);
    char ch;
    if(!fin)
    {
        cout<<"File not found";
    }
    else
    {
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
    }
    fin.close();
}
void copyContent()
{
    ifstream source("file1.txt");
    ofstream destination("file2.txt");
    if(!source.is_open() ||!destination.is_open())
    {
        cout<<"File could not open!"<<endl;
        exit(0);
    }
    char buffer[100];
    while(!source.eof())
    {
        source.read(buffer,sizeof(buffer));
        destination.write(buffer,source.gcount());
    }
    source.close();
    source.close();
    cout<<"File copied successfullly"<<endl;
}

int main()
{
    writing();
    copyContent();
    return 0;
}