#include <iostream>
using namespace std;

class employee{
private:
string fname;
string lname;
int msalary;
int ysalary;
public:
 employee(){
    fname="";
 }
employee(string fn,string ln, int ms){
  fn=fname;
  ln=lname;
   ms=msalary;
 }
void setfn(string fn);
void setln(string ln);
void setms(int ms);
// int getfn();
// int getln();
// int getms();
int getyms();
int getnms();

};



void employee::setfn(string fn){
    fn=fname;
}

void employee::setln(string ln){
    ln=lname;
}

void employee::setms(int ms){
    if(ms<=0){
        msalary=0;
    }
    else
    msalary=ms;
}

int employee::getyms(){
    return msalary*12;
    
}

int employee::getnms(){
    return (getyms()+getyms()/10);
}



