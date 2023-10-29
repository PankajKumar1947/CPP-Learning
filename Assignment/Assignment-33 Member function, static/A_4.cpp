/* Q3. Define a class Test Result with properties roll_no, right, wrong, net_score. 
Also define class properties right_weightage, wrong_weightage. Provide methods to set and get all the properties.
*/
#include<iostream>
using namespace std;

class TestResult
{
    private:
     int roll_no, right, wrong, net_score;
     static int right_weightage,wrong_weightage;
    public:
     void setRollNo(int r){
        roll_no=r;
     }
     void setRight(int r){
        right=r;
     }
     void setWrong(int w){
        wrong=w;
     }
     void setNetScore(int n){
        net_score=n;
     }
     int getRollNo(){
        return roll_no;
     }
     int getRight(){
        return right;
     }
     int getWrong(){
        return wrong;
     }
     int getNetScore(){
        return net_score;
     }
     static void setRightWeightage(int w){
        right_weightage=w;
     }
     static void setWrongWeightage(int w){
        wrong_weightage=w;
     }
     static int getRightWeightage(){
        return right_weightage;
     }
     static int getWrongWeightage(){
        return wrong_weightage;
     } 
};

int TestResult::right_weightage=3;
int TestResult::wrong_weightage=1;

/* Q4. Write a driver function main() to use TestResult class(Question-3).
Create an array to 5 TestResult objects, set values to all the objects and display the results in sorted order(by net_score)
*/

void setTestResult(TestResult tr, int a, int b, int c)
{
    tr.setRollNo(a);
    tr.setRight(b);
    tr.setWrong(c);
    tr.setNetScore(b*tr.getRightWeightage()-c*tr.getWrongWeightage());
}

void printTestResult(TestResult tr)
{
    cout<<"\n"<<tr.getRollNo()<<" "<<tr.getRight()<<" "<<tr.getWrong()<<" "<<tr.getNetScore();
}

void sortByNetScore(TestResult result[],int size)
{
    int i,r;
    TestResult temp;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(result[i].getNetScore()>result[i+1].getNetScore())
            {
                temp=result[i];
                result[i]=result[i+1];
                result[i+1]=temp;
            }
        }
    }
}

int main(){
    TestResult result[5];
    setTestResult(result[0],100,80,20);
    setTestResult(result[1],101,70,10);
    setTestResult(result[2],102,90,0);
    setTestResult(result[3],103,60,15);
    setTestResult(result[4],104,50,12);
    sortByNetScore(result,5);
    for(int i=0;i<=4;i++)
       printTestResult(result[i]);
    return 0;
}