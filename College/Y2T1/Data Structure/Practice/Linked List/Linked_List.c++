#include <iostream>
#include "Linked_List.h"
using namespace std;

int main(){
   node* h=NULL;
   insert_at_end(&h,35);
   insert_at_first(&h,67);
   insert_at_first(&h,6);
   insert_after(h->next,4);
   insert_at_first(&h,7);
   insert_at_first(&h,7);
   insert_after(h->next,23);

 
   cout<< "Created List Is : ";
   printlist(h);
   
    // node* head=NULL;

    // insertatend(&head, 6);
    // push(&head, 7);
    // push(&head, 8);
    // insertatend(&head, 9);
    // insertafter(head->next,87);
    // cout<<"created list is : ";
    // printlist(head);

}

