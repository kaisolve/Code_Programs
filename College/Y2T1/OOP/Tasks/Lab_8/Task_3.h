#include <bits/stdc++.h>
using namespace std;

class Person{
protected:
string name;
int year_of_birth;
public:
Person(){};
Person(string n,int yob){
n=name;
yob=year_of_birth;
}

};

class Student:public Person{
protected:
int studentID;
int enrolledSemester;
public:
Student(){};
Student(int s,int e, string n, int yob){
s=studentID;
e=enrolledSemester;
n=name;
yob=year_of_birth;  
}
void display(){
    cout<<name<<year_of_birth<<studentID<<enrolledSemester;
}

};

class Employee:public Person{
protected:
int employeID;
int joiningyear;
string jobtitle;
public:
Employee(){};
Employee(int e,int j, string jj,string n, int yob){
e=employeID;
j=joiningyear;
jj=jobtitle;
n=name;
yob=year_of_birth;  
}
void display(){
    cout<<name<<year_of_birth<<employeID<<joiningyear<<jobtitle;
}

};

class Administration:public Employee{

public:
Administration(){};
Administration(int e,int j, string jj){
e=employeID;
j=joiningyear;
jj=jobtitle;
// ei=employeeid;
// jy=joiningyear;
// jt=jobtitle;
}
void setjobtitle(string job){
jobtitle=job;
}
void getjobtitle(){
    cout<<jobtitle<<endl;
}
};

class Academic:public Student{
protected:
string courseid;
string coursetitle;
public:
Academic(){};
Academic(string c, string ct){
c=courseid;
ct=coursetitle;
}
void setcourseid(string cid ){
courseid=cid;
}
void getcourseid(){
    cout<<courseid<<endl;
}
};