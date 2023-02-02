#include<iostream>
using namespace std;

class stack{
#define size 5
int top=-1;
int arr[5];

public:
bool isEmpty();
bool isFull();
void push(int value);
void pop();
int topf();
void peek();
void display();
};

bool stack::isEmpty(){
    if(top==-1)
        return true;
    else 
        return false;
}
void stack::push(int value){
    if(top==size-1)
        cout<<"stack is full";
    top++;
    arr[top]=value;
}

void stack::pop(){
    if(isEmpty())
        cout<<"fun is empty";
    top--;
}

void stack::peek(){
      if(isEmpty())
        cout<<"fun is empty";
    cout<<arr[top];
}

int stack::topf(){
      if(isEmpty())
        return -1;
      else
        return top;
}   

void stack::display(){
      if(isEmpty())
        cout<<"fun is empty";
      for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
      }
}



