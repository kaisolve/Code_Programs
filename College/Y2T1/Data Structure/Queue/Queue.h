#include <bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* link;
};

class Queue:public node{
public:
node* front;
node* reer;
Queue(){
    front=reer=NULL;
}
bool isempty();
void enqueue(int entery);
void dequeue();
void erasequeue();
void display();
};

bool Queue::isempty(){
    return reer==NULL;
}

void Queue::enqueue(int entery){
    node *insert_ptr;
    insert_ptr=new node;
    insert_ptr->data=entery;
    insert_ptr->link=NULL;
    if(isempty()) {
        reer=front=insert_ptr;
    }
    reer->link=insert_ptr;
    reer=insert_ptr;
}

void Queue::dequeue(){
    if(isempty()) cout<<"empty";
    node *remove_ptr;
    remove_ptr=front;
    if(reer==front){
        reer=front=NULL;
    }
    front=front->link;
    delete remove_ptr;
}

void Queue::erasequeue(){
    if(isempty()) cout<<"empty";
    node *cursor;
    for(cursor=front;front!=NULL;front=front->link){
        delete cursor;
    }
    reer=NULL;
}

void Queue::display(){
    node *cursor;
    for(cursor=front;cursor!=NULL;cursor=cursor->link){
        cout<<cursor->data<<" "<<endl;
    }
    if(isempty()) cout<<"empty";
}