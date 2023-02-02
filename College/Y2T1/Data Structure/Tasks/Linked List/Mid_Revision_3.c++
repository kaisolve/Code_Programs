#include<bits/stdc++.h>
#include "Mid_Revision_3.h"
using namespace std;
int main(){
    node* h=NULL;
    insertfirst(&h,67);
    insertend(&h,35);
    insertafter(h->next,5);
    insertfirst(&h,8);
    insertfirst(&h,4);
    printlist(h);
}