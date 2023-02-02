#include <iostream>
using namespace std;

class stack{
  private:
  #define SIZE 5
  int A[SIZE];
  int top = -1;

  public:
  bool isempty();
  void push(int value);
  void pop();
  void show_top();
  void displayStack();
};

bool stack::isempty()
{
  if(top==-1)
  return true;
  else
  return false;
}

void stack::push(int value)
{
  if(top==SIZE-1)
  {    cout<<"Stack is full!\n";
  }
   else
  {
    top++;
    A[top]=value;
  }
}

void stack::pop()
{
 if(isempty())
  cout<<"Stack is empty!\n";
 else
  top--;
}

void stack::show_top()
{
 if(isempty())
  cout<<"Stack is empty!\n";
 else
  cout<<"Element at top is: "<<A[top]<<"\n";

}

void stack::displayStack()
{
  if(isempty())
 {
    cout<<"Stack is empty!\n";
 }
 else
 {
 for(int i=top+1;i>=-1;i--){
        cout<<A[i];
    }

}
}