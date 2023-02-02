#include <iostream>
using namespace std;
#include "Task_1.h"
int main(){
 int amount;
 cout<<"enter amount : ";
 cin>>amount;
account g;
g.credit(amount);
 int mount;
 cout<<"enter mount : ";
 cin>>mount;
g.debit(mount);
g.getaccount();
}