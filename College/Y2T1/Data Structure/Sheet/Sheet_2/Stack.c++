#include <bits/stdc++.h>
using namespace std;
// template <class ty>
class node{
public:
char data;
node *link; 
};

// template <class ty>
class Stack:public node{
public:
node *top=NULL;
bool isEmpty();
void push(char data);
void display();
};

// template <class ty>
void Stack::push(char data){
    node *insert_ptr;
    insert_ptr=new node;
    insert_ptr->data=data;
    insert_ptr->link=top;
    top=insert_ptr;
}
// template <class ty>
void Stack::display(){
    node *cursor;
    // for(cursor=top;cursor!=NULL;cursor=cursor->link){
    //     cout<<cursor->data;
    // }
    cursor=top;
    while(cursor!=NULL){
        cout<<cursor->data<<endl;
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