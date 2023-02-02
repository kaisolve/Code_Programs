#include <iostream>
using namespace std;
#include "Task_1.h"
#include "Task_1.c++"
#include <stdexcept>
int main(){
    try{
        reg r("12345",8);
        r.print();
    }
    catch(invalid_argument e){
        cerr<<e.what()<<endl;
    }
    cout<<reg::count;
      try{
        reg r("123456",8);
        r.print();
    }
    catch(invalid_argument e){
        cerr<<e.what()<<endl;
    } 
    cout<<reg::count<<endl;
     
     
}