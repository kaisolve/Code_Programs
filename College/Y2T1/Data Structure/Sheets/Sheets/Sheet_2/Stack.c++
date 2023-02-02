#include <bits/stdc++.h>
using namespace std;
// template <class ty>
class node{
public:
string data;
node *link; 
};

// template <class ty>
class Stack:public node{
public:
node *top=NULL;
bool isEmpty();
void push(string data);
void display();
};

// template <class ty>
void Stack::push(string data){
    node *insert_ptr;
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
        cout<<cursor->data<<" "<<endl;
        cursor=cursor->link;
    }
}
template <class ty>

int main(){
    Stack word;
    int n;
    cin>>n;
    string wrds[n];
    for(int i=0;i<n;i++){
        while(wrds[i]!=" "){
        cin>>wrds[i];
    }
    }
    for(int i=0;i<n;i++){
      word.push(wrds[i]);

    }
    
    word.display();
}
