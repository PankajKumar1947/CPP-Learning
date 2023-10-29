#include<fstream>
#include<iostream>
using namespace std;

void writing()
{
    ofstream fout;
    fout.open("file1.txt",ios::out);
    char str[]="MySirG Education Private Limited";
    fout<<str;
    fout.close();
}
/*void reading()
{
    ifstream fin;
    char str[100];
    fin.open("file1.txt",ios::in);
    if(!fin)
      cout<<"File not found";
    else
    {
        fin.getline(str,100);
        cout<<str;
    }
    fin.close();
}
*/
//Above code will fail when the string input is greater than 100;
void reading()
{
    ifstream fin;
    char ch;
    fin.open("file1.txt",ios::in);
    if(!fin)
      cout<<"file not found";
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
//Appending data in file
void append(char data[])
{
    ofstream fout;
    fout.open("file1.txt",ios::app);
    fout<<data;
    fout.close();
}
int main()
{
    writing();
    reading();
    cout<<endl;
    char str[]="\nFile Handling in C";
    append(str);
    reading();
    return 0;
}