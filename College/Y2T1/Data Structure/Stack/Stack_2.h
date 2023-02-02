#include <bits/stdc++.h>
using namespace std;
const int sizes=10;
class stacks{
private:
int arr[sizes];
int top=-1;
public:
bool isfull();
bool isempty();
void push(int val);
void pop();
void peek();
void display();
};

bool stacks::isempty(){
    return top==-1;
}

bool stacks::isfull(){
    return top==sizes-1;
}

void stacks::push(int val){
    if(isfull()) cout<<"full";
    top++;
    arr[top]=val;
}

void stacks::pop(){
    if(isempty()) cout<<"empty";
    top--;
}

void stacks::peek(){
    cout<<arr[top];
}

void stacks::display(){
    for(int i=top+1;i>=-1;i--){
        cout<<arr[i];
    }
}