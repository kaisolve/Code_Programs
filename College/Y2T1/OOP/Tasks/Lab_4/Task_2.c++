#include <iostream>
#include "Task_2.h"
using namespace std;

int main(){
    int pric,quan;
    cout<<"enter price, quant : ";
    cin>>pric>>quan;
    invoice first;
    first.setpri(pric);
    first.setquan(quan);
    cout<<first.getinvoice();

}