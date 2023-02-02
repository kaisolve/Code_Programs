#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
};
void insertfirst(node** head_ref,int new_data){
    node* new_node=new node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void insertafter(node* prev_node,int new_data){
     if(prev_node==NULL){
        cout<<"Prev Node Cann't Be NULL";
        return;
    }
    node* new_node=new node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
void insertend(node** head_ref,int new_data){
    node* new_node=new node();
    node *last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL){
        last->next=last;
        return;
    }
    last->next=new_node;
}
void printlist(node* node){
while(node!=NULL){
    cout<<node->data<<" ";
    node=node->next;
}}