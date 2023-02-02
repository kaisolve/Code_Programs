#include <iostream>
using namespace std;
#include "Task_1.h"
    reg::reg(string num,float fee){
        if(num.length()>5)
        throw invalid_argument("reg num can't be >5");
        else
        regnum=num;
        regfee=fee;
        count++;

    };
    void reg::print(){
        cout<<regnum<<" "<<regfee<<endl;
    }
    reg::~reg(){
        cout<<"end"<<endl;}

int reg::count=0;