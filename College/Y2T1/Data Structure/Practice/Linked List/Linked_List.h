#include <iostream>
using namespace std;
// tzpedef double value?tzbeö
class node{
    public:
    int data;
    node *next;
};

void insert_at_first(node** head_ref, int new_data){
    node* new_node=new node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void insert_after(node* prev_node, int new_data){
    if(prev_node==NULL){
        cout<<"Prev Node Cann't Be NULL";
        return;
    }
    node* new_node=new node;
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
void insert_at_end(node** head_ref, int new_data){
    node* new_node=new node;
    node *last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next != NULL){
        last= last->next;
        return;
    }
    last->next=new_node;
    return;
}
void printlist(node *node){
    while (node!=NULL)
    {
        cout<<node->data<<" ";  
        node=node->next;

     }
    
}

// // create node ;
// class node{
//     public:
//     int data;
//     node *next;
// };
// //? add node to the list front ;
// void push(node** head_ref, int new_data){
//     node* new_node = new node();
//     new_node->data = new_data;
//     new_node->next = (*head_ref);
//     (*head_ref)=new_node;
// }
// // add node to specific place in the list ;
// void insertafter(node* prev_node, int new_data){
//     if(prev_node == NULL){
//         cout <<"the given pre node cannot be null";
//         return;
// }

// node* new_node = new node();
// new_node->data = new_data;
// new_node->next = prev_node->next;  
// prev_node->next = new_node;

// }

// //insert node at the end of the list ;

// void insertatend(node** head_ref, int new_data){
//     node* new_node =new node();
//     node *last=*head_ref;
//     new_node->data =new_data;
//     new_node->next = NULL;
//     if(*head_ref==NULL){
//         *head_ref=new_node;
//         return;
//     }
//     while(last->next != NULL){
//         last=last->next;
//     }
//     last->next = new_node;
//     return;
// }

// void printlist(node *node){
//     while(node!=NULL){
//         cout<<node->data<<" ";
//         node = node->next;}
// }























