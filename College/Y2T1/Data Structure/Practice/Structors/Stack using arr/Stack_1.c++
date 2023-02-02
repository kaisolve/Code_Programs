//comment
//100 code first
//yeeeah
//yes

#include <iostream>
#include "Stack_1.h"
using namespace std;

int main()
{
  stack g;
  
 int choice, flag=1, value;
 while( flag == 1)
 {
 cout<<"\n1.PUSH 2.POP 3.SHOW_TOP 4.DISPLAY_STACK 5.EXIT\n";
 cin>>choice; 
 switch (choice){
     case 1:cout<<"Enter Value: \n";
     cin>>value;
     g.push(value);
     break;
     case 2:g.pop();
     break;
     case 3:g.show_top();
     break;
     case 4:g.displayStack();
     break;
     case 5:flag=0;
     break;
 }
 }
  return 0;
}