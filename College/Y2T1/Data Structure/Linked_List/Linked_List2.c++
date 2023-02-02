#include <bits/stdc++.h>
#include "Linked_List2.h"
using namespace std;

int main(){
    node *head=NULL;
    push(head,5);
    // push(head,6);
    push_back(head,34);
        push_back(head->link,34);
    push_back(head,34);

    // push(head,4);
    // list_head_remove(head);
    // last_node_remove(head->link);
    // node *res;
    // res=copy(head);
    display(head);
}
