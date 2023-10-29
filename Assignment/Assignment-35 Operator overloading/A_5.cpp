/*Q5. Define a class Matrix to represent 3*3 matrix. Provide appropriate instance methods.
Also define operator +, operator -, operator * to perform addition, subtraction and multiplication operations respectively.
*/
#include<iostream>
using namespace std;

class Matrix
{
    private:
      int m[3][3];
    public:
      void setValues()
      {
        for(int i=0;i<=2;i++)
         for(int j=0;j<=2;j++)
          cin>>m[i][j];
      }
      void showValues()
      {
        for(int i=0;i<=2;i++)
        {
         for(int j=0;j<=2;j++)
          cout<<m[i][j]<<" ";
        cout<<endl;
        }
      }
      Matrix operator+(Matrix);
      Matrix operator-(Matrix);
      Matrix operator*(Matrix);
};

Matrix Matrix::operator+(Matrix M)
{
    Matrix temp;
    for(int i=0;i<=2;i++)
     for(int j=0;j<=2;j++)
       temp.m[i][j]=m[i][j]+M.m[i][j];
    return temp;
}
Matrix Matrix::operator-(Matrix M)
{
    Matrix temp;
    for(int i=0;i<=2;i++)
     for(int j=0;j<=2;j++)
       temp.m[i][j]=m[i][j]-M.m[i][j];
    return temp;
}
Matrix Matrix::operator*(Matrix M)
{
    Matrix temp;
    int sum,k;
    for(int i=0;i<=2;i++)
     for(int j=0;j<=2;j++)
     {
        for(sum=0,k=0;k<=2;k++)
        {
            sum=sum+m[i][k]*M.m[k][j];
        }
        temp.m[i][j]=sum;
     }
     return temp;
}

int main()
{
    Matrix m1,m2,m3,m4,m5;
    cout<<"Enter Matrix-1:"<<endl;
    m1.setValues();
    cout<<"Enter Matrix-2:"<<endl;
    m2.setValues();
    cout<<"Matrix-1 is:"<<endl;
    m1.showValues();
    cout<<"Matrix-2 is:"<<endl;
    m2.showValues();
    m3=m1+m2;
    cout<<"Added matrix is:"<<endl;
    m3.showValues();
    cout<<"Subtracted matrix is: "<<endl;
    m4=m1-m2;
    m4.showValues();
    cout<<"Multiplied matrix is: "<<endl;
    m5=m1*m2;
    m5.showValues();
    return 0;
}