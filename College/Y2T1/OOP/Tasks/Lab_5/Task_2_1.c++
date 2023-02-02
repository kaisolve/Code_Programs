#include<iostream>
using namespace std;
#include "Task_2.h"
#include "Task_2.c++"
#include <stdexcept>
int main(){
    try{
        RealEstate r('S',5000,4);
        r.show();
    }
     catch(invalid_argument e){
        cerr<<e.what()<<endl;
    }   
}