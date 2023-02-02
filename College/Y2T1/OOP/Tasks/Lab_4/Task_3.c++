#include <iostream>
#include "Task_3.h"
using namespace std;

int main(){
    int fms;
    cin>>fms;
    employee first,second;
    first.setms(fms);
    cout<<first.getyms()<<endl;
    cout<<first.getnms()<<endl;
    int sms;
    cin>>sms;
    second.setms(sms);
    cout<<second.getyms()<<endl;
    cout<<second.getnms()<<endl;
   
}
