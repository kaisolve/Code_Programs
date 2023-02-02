#include <bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* link;
};
class Stack:public node{
public:
node* top;
Stack(){
    top=NULL;
}
bool isEmpty();
void push(int value);
void pop();
void peek();
void show_top();
void display();
};

void Stack::push(int value){
    node *insert_ptr;
    insert_ptr=new node;
    insert_ptr->data=value;
    insert_ptr->link=top;
    top=insert_ptr;
}

bool Stack::isEmpty(){
    return top==NULL;
}
void Stack::pop(){
    if(isEmpty())
        cout<<"stack is empty";
    node *remove_ptr;
    remove_ptr=top;
    top=top->link;
    remove_ptr=remove_ptr->link=NULL;
    delete remove_ptr;
    
}

void Stack::peek(){
    if(isEmpty())
       cout<<"stack is empty";
    cout<<top->data;
}

void Stack::show_top(){
    cout<<top->data;
}
void Stack::display(){
    node *cursor;
    cursor=top;
    while(cursor!=NULL){
        cout<<cursor->data<<" "<<endl;
        cursor=cursor->link;
    }
}