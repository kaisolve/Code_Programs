#include <iostream>
using namespace std;

class Employee{
protected:
string name;
int empID;
public:
Employee(){};
void setdefault(string name,int empid){
    this->name=name;
    empid=empID;
    
}
};
class HourlyEmployee:public Employee{
public:
HourlyEmployee(){};
HourlyEmployee(string a,int b){
a=name;
b=empID;
}
void calculare_the_hourly_income(int num){
cout<< num*150;
}
};
class Permanent:public Employee{
public:
Permanent(){};
Permanent(string a,int b){
a=name;
b=empID;
}
void calculate_income(){
   cout<< 240*150;
}
};