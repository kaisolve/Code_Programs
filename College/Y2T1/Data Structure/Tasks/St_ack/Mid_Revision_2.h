#include<bits/stdc++.h>
using namespace std;
class stak{
    private:
    #define size 5
    int a[size];
    int top=-1;
    public:
    bool isempty();
    void push(int n);
    void pop();
    void show_top();
    void display();
};
bool stak::isempty(){
if(top==-1){
    return true;
}
else
return false;
}
void stak::push(int n){
    if(top==size-1){
        cout<<"full";
    }
    else{
            top++;
a[top]=n;
    }

}
void stak::pop(){
    if(isempty())
    cout<<"gh";
    else
    top--;
}
void stak::show_top(){
if(isempty())
    cout<<"gh";
    else
    cout<<a[top];
    }
    void stak::display(){
        if(isempty())
    cout<<"gh";
    for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    }

