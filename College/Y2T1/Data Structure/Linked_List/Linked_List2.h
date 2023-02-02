#include <bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node *link;
};

void push(node* &head_ptr, int entery){
    node *insert_ptr;
    insert_ptr=new node;
    insert_ptr->data=entery;
    insert_ptr->link=head_ptr;
    head_ptr=insert_ptr;
}

void push_back(node* &previos_ptr, int entery){
    node *insert_ptr;
    insert_ptr=new node;
    insert_ptr->data=entery;
    insert_ptr->link=NULL;
    previos_ptr->link=insert_ptr;
}

void list_head_remove(node* &head_ptr){
    node *remove_ptr;
    if(head_ptr==NULL) return;
    remove_ptr=head_ptr;
    head_ptr=head_ptr->link;
    delete remove_ptr;
}

void last_node_remove(node* &previos_ptr){
    node *remove_ptr;
    remove_ptr=previos_ptr->link;
    previos_ptr->link=remove_ptr->link;
    delete remove_ptr;
}

node* search(node* head_ptr, int target){
    node *cursor;
    for(cursor=head_ptr;cursor!=NULL;cursor=cursor->link){
        if(target==cursor->data)
            return cursor;
    }
    return NULL;
}

node* find_node(node* head_ptr,size_t position){
    node *cursor;
    size_t i;
    cursor=head_ptr;
    for(i=0;(i<position)&&cursor!=NULL;i++){
        cursor=cursor->link;
    }
    return cursor;
}

size_t list_length(node* head_ptr){
    node* cursor;
    cursor=head_ptr;
    size_t length;  
    for(cursor=head_ptr;cursor!=NULL;cursor=cursor->link){
        length++;
    }
    return length;
}

node* copy(node* &list){
    if(list==NULL) cout<<"empty list";
    node *res;
    res->data=list->data;
    res->link=copy(list->link);
    return res;    
}

// void display(node* head_ptr){
//     node *cursor;
//     for(cursor=head_ptr;cursor!=NULL;cursor=cursor->link){
//         cout<<cursor->data<<" "<<endl;
//     }
// }

void display(node* &head_ptr){
    node *cursor;
    cursor=head_ptr;
    while(cursor!=NULL){
        cout<<cursor->data<<" "<<endl;
        cursor=cursor->link;
    }
}