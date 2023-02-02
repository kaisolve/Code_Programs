#include<bits/stdc++.h>
using namespace std;

// template<class t>
class node{
public:
int data;
node* link;
};
// template<class t>
class Queue:public node{
public:
node *front;
node *reer;  
Queue(){
    front=NULL;
    reer=NULL;
}
bool isEmpty();
void enQueue(int value);
void deQueue();
void eraseQueue();
void display();
};

bool Queue::isEmpty(){
    if(reer==NULL)
        return true;
    else   
        return false;
}

void Queue::enQueue(int value){
    node *insert_ptr;
        insert_ptr=new node;
        insert_ptr->data=value;
        insert_ptr->link=NULL;
    if(isEmpty()){
        reer=front=insert_ptr;
    }
    else{ 
        reer->link=insert_ptr;
        reer=insert_ptr;
    }
   
}

void Queue::deQueue(){
    if(isEmpty())
        cout<<"empty"<<endl;
    else{
    node *remove_ptr;
    remove_ptr=front;
    if(reer==front){
        reer=front=NULL;
    }
    front=front->link;
    delete remove_ptr;
    }
}

void Queue::eraseQueue(){
    node *cursor;
    while(front!=NULL){
        cursor=front;
        front=front->link;
        delete cursor;
    }
    reer=NULL;
}

void Queue::display(){
if(isEmpty())
    cout<<"empty"<<endl;
node *cursor;
cursor=front;
// for(cursor=front;cursor!=reer;cursor=cursor->link);
 while(cursor!=NULL){
        cout<<cursor->data<<" "<<endl;
        cursor=cursor->link;
    }
}
