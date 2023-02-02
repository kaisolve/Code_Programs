#include <bits/stdc++.h>
#include "Linked_List.h"
using namespace std;

void push(node** head_ptr,int entry){
    // 1. locate the node;
    node* new_node = new node();
    // 2. put in data;
    new_node->data=entry;
    // 3. make the head_ptr locate to new_node data;
    new_node->next=(*head_ptr);
    // 4. move the head to the new node;
    (*head_ptr)=new_node;
}

void push_back(node** head_ptr,int entery){
    node* new_node = new node();
    new_node->data=entery;
    new_node->next=NULL;
    node* last=*head_ptr;
    if(*head_ptr != NULL){
        *head_ptr=new_node;
        return;
    }
    while(last->next!=NULL){
        last->next=last;
        return; 
            }
    last->next=new_node;
}

void display(node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}



// node* new_node=new node();
//     node *last=*head_ref;
//     new_node->data=new_data;
//     new_node->next=NULL;
//     if(*head_ref==NULL){
//         *head_ref=new_node;
//         return;
//     }
//     while(last->next!=NULL){
//         last->next=last;
//         return;
//     }
//     last->next=new_node;