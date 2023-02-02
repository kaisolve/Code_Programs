#include <bits/stdc++.h>
using namespace std;
class node{
public:
char data;
node *link; 
};

class Stack:public node{
public:
node *top=NULL;
bool isEmpty();
void push(char data);
void display();
};

void Stack::push(char data){
    node *insert_ptr;
    insert_ptr=new node;
    insert_ptr->data=data;
    insert_ptr->link=top;
    top=insert_ptr;
}
void Stack::display(){
    node *cursor;
    cursor=top;
    while(cursor!=NULL){
        cout<<cursor->data;
        cursor=cursor->link;
    }
}



int main(){
    Stack s;
    string in;
    cin>>in;
    for(int i=0;i<in.length();i++) {
        s.push(in[i]);
    }
    s.display();
}




///
// Stack s;
//     char word;
//     while(cin.peek()!='\n'){
//         cin>>word;
//         if(isalpha(word)){
//             s.push(toupper(word));
//         }
//     }
//     s.display();
///