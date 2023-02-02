#include <bits/stdc++.h>
using namespace std;

class double_list{
    private:
        struct Node{
            int data;
            Node *next;
            Node *prev;
        };
        int count;
        Node *first;
        Node *last;
    public:
    double_list(){
        count=0;
        first=last=NULL;
    }
    bool isempty(){
        return (first==NULL);
    }
    void push(int entery);
    void push_back(int entery);
    void insert_at_pos(int entery, int pos);
    void pop();
    void pop_back();
    void pop_item(int entery);
    void display();
    void reverse();
};

void double_list::push(int entery){
    Node *insert_ptr;
    insert_ptr=new Node;
    insert_ptr->data=entery;
    if(count==0){
        first=last=insert_ptr;
        insert_ptr->next=insert_ptr->prev=NULL;
    }
        insert_ptr->next=last;
        insert_ptr->prev=NULL;
        first->prev=insert_ptr;
        first=insert_ptr;
    count++;
}

void double_list::push_back(int entery){
    Node *insert_ptr;
    insert_ptr=new Node;
    insert_ptr->data=entery;
    if(count==0){
        first=last=insert_ptr;
        insert_ptr->next=insert_ptr->prev=NULL;
    }
        insert_ptr->next=NULL;
        insert_ptr->prev=last;
        last->next=insert_ptr;
        last=insert_ptr;
    count++;
}

void double_list::insert_at_pos(int entery, int pos){
    if(pos<0||pos>count) cout<<"out range";
    Node *insert_ptr=new Node;
    insert_ptr->data=entery;
    if(pos==0) push(entery);
    else if (pos==count) push_back(entery);
    else{
        Node *cursor=first;
        for(int i=1;i<pos;i++){
            cursor=cursor->next;
        }
        insert_ptr->next=cursor->next;
        insert_ptr->prev=cursor;
        cursor->next->prev=insert_ptr;
        cursor->next=insert_ptr;
        count++;

    }
}

void double_list::pop(){
    if(count==0) cout<<"empty";
    if(count==1){
        delete first;
        last=first=NULL;
        count--;
    }
    Node *remove_ptr=first;
    first=first->next;
    first->prev=NULL;
    delete remove_ptr;
    count--;
}

void double_list::pop_back(){
    if(count==0) cout<<"empty";
    if(count==1){
        delete last;
        last=first=NULL;
        count--;
    }
    Node *remove_ptr=last;
    last=last->prev;
    last->next=NULL;
    delete remove_ptr;
    count--;
    }

void double_list::pop_item(int entery){
    if(count==0) cout<<"empty";
    if(first->data==entery) pop(); 
    else{
    Node *cursor=first->next;
    while(cursor!=NULL){
        if(cursor->data==entery) break;
        cursor=cursor->next;
    }
    if(cursor==NULL) cout<<"not found";
    if(cursor->next==NULL) pop_back();
    else{
    cursor->prev->next=cursor->next;
    cursor->next->prev=cursor->prev;
    delete cursor;
    count--;    
    }
    }      
}

void double_list::display(){
    Node *cursor=first;
    while(cursor!=NULL){
        cout<<cursor->data<<" ";
        cursor=cursor->next;
    }
    cout<<endl;
}

void double_list::reverse(){
    Node *cursor=last;
    while(cursor!=NULL){
        cout<<cursor->data<<" ";
        cursor=cursor->prev;
    }
    cout<<endl;
}