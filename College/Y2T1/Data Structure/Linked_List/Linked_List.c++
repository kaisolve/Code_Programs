#include <bits/stdc++.h>
using namespace std;
#include "Linked_List.h"
int main(){
    Node* head=NULL;
    push(head,50); //50
    // display(head);
    // cout<<"1"<<endl;
    // push(head->link,562); //50 562    
    // display(head);
    // cout<<"2"<<endl;
    push(head,326);//326 50 562
    // display(head);
    // cout<<"3"<<endl;
    // push_back(head,223);//326 223 50 562 
    // display(head);
    // cout<<"4"<<endl;
    // push_back(head->link,45);//326 223 45 50 562
    // display(head);
    // cout<<"5"<<endl;
    // last_node_remove(head);//326 45 50 562 
    display(head);
    // cout<<"6"<<endl;
    // Node *result=copy(head);
    // display(result);
}