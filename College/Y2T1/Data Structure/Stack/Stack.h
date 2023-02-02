#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *link;
};

class Stack:public node{
    public:
    node* top;
    Stack(){
        top=NULL;
    }
    bool isempty();
    void push(int entery);
    void pop();
    void peek();
    void display();
    void show_top();
};

bool Stack::isempty(){
    return top==NULL;
}
void Stack::push(int entery){
    node *insert_ptr;
    insert_ptr=new node;
    insert_ptr->data=entery;
    insert_ptr->link=top;
    top=insert_ptr; 
}

void Stack::pop(){
    if(isempty()) cout<<"empty";
    node *remove_ptr;
    remove_ptr=top;
    top=top->link;
    remove_ptr=remove_ptr->link=NULL;
    delete remove_ptr;
}

void Stack::show_top(){
    cout<<top->data;
}

void Stack::peek(){
    if(isempty()) cout<<"EMPTY";
    cout<<top->data;
}
void Stack::display(){
    node *cursor;
    for(cursor=top;cursor!=NULL;cursor=cursor->link){
        cout<<cursor->data<<" "<<endl;
    } 
}