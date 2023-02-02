#include <bits/stdc++.h>
using namespace std;
const int max_size=100;
class queues{
private:
int front,reer,count,arr[max_size];
public:
queues(){
    front=count=0;
    reer=max_size-1;
}
bool isfull();
bool isempty();
void enQueue(int value);
void deQueue();
void display();
};

bool queues::isfull(){
    return count==max_size;
}

bool queues::isempty(){
    return count==0;
}

void queues::enQueue(int val){
if(isfull()) cout<<"full";
reer=(reer+1)%max_size;
arr[reer]=val;
count++;
}

void queues::deQueue(){
if(isempty()) cout<<"empty";
front=(front+1)%max_size;
count--;
}

void queues::display(){
    if(isempty()) cout<<"empty";
    for(int i=front;i!=reer+1;i=(i+1)%max_size){
        cout<<arr[i]<<" ";
    }
}
