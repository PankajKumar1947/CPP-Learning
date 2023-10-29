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

int TestResult::right_weightage;
int TestResult::wrong_weightage;
