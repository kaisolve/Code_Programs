#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *link;
};

void push(Node* &head_ptr, int entry){
    Node *insert_ptr;
    insert_ptr=new Node;
    insert_ptr->data=entry;
    insert_ptr->link=head_ptr;
    head_ptr=insert_ptr;
}

void push_back(Node* &previous_ptr, int entry){
    Node *insert_ptr;
    insert_ptr=new Node;
    insert_ptr->data=entry;
    insert_ptr->link=previous_ptr->link;
    previous_ptr->link=insert_ptr;
}

void list_head_remove(Node* &head_ptr){
    Node *remove_ptr;
    if(head_ptr==NULL) return;
    remove_ptr=head_ptr;
    head_ptr=head_ptr->link;
    delete remove_ptr;
}

void last_node_remove(Node* &previous_ptr){
    Node *remove_ptr;
    remove_ptr=previous_ptr->link;
    previous_ptr->link=remove_ptr->link;
    delete remove_ptr;
}

Node* search(Node* head_ptr, int target){
    Node *cursor;
    for(cursor=head_ptr; cursor!=NULL;cursor=cursor->link){
        if(target==cursor->data)
            return cursor;
    }
        return NULL;
}

Node* find_node(Node* head_ptr, size_t position){
    Node *cursor;
    size_t i;
    cursor = head_ptr;
    for(i=0;(i<position)&&cursor!=NULL;++i){
        cursor=cursor->link;
    }
    return cursor;    
    
}

size_t list_length(Node* &head_ptr){
    Node *cursor;
    size_t answer;
    for(cursor=head_ptr;cursor!=NULL;cursor=cursor->link){
        answer++;
    }
    return answer;
}

Node* copy(Node* &list){
    if(list==NULL)
        cout<<"empty";
    Node *res;
    res->data=list->data;
    res->link=copy(list->link);
    return res;
}

void display(Node* &head_ptr){
    Node *cursor;
    cursor=head_ptr;
    while(cursor!=NULL){
        cout<<cursor->data<<" "<<endl;
        cursor=cursor->link;
    }
}