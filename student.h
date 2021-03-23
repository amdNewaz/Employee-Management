
#include<iostream>
using namespace std;
class student
{
private:
    
    string kp;
    double LE,test1,LT,FIN,ASG,QZ,Proj;

    string Grade;
    

public:
string name;
double total;

student() {};
   void setStudent(string k, string n, double LE,double test1,double LT,double FIN,double ASG,double QZ,double Proj);
    void display();

    string grade(double value);
};
