#include "student.h"


string student::grade(double value){

    if(value>=80) return "A";
    
    else if(value>=75) return "A-";
    else if(value>=70) return "B+";
    else if(value>=65) return "B";
    else if(value>=60) return "B-";
    else if(value>=55) return "C+";
    else if(value>=50) return "C";
    else  return "FAIL";
    
} 

   void student::setStudent(string k, string n, double LE,double test1,double LT,double FIN,double ASG,double QZ,double Proj)
    {

        name = n;
        kp = k;
       this->LE=LE;
       this->test1=test1;
       this->LT=LT;
       this->FIN=FIN;
       this->ASG=ASG;
       this->Proj=Proj;
       this->QZ=QZ;
       total=LE+test1+FIN+LT+ASG+QZ+Proj;
       
      
    }
   void  student:: display(){

        cout << " Name : " <<  name <<  endl;
        cout << " No. K/P   : " <<  kp <<  endl;
        cout << " LE : " <<  LE <<  endl;
        cout << " Test1 : " <<  test1 <<  endl;
        cout << " LT : " << LT <<  endl;
        cout << " FIN : " <<  FIN <<  endl;
        cout << " ASG : " <<  ASG<<  endl;
        cout << " QUIZ : " <<  QZ<<  endl;
        cout << " Project : " <<  Proj <<  endl;
        cout << " total : " <<  total<<  endl;
        cout << " Grade : " <<  grade(total)<<  endl;

    }
