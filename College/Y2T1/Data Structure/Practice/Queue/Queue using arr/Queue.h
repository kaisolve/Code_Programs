#include <bits/stdc++.h>
using namespace std;
const int Max_Length=100;
// #define Max_Length 100
class arrQueue{
    private:
    int front;
    int reer;
    int count;
    int arr[Max_Length];
    public:
    arrQueue(){
        front=0;
        reer=Max_Length-1;
        count=0;
    }
    bool isEmpty();
    bool isFull();
    void enQueue(int value);
    void deQueue();
    void display();
};

bool arrQueue::isEmpty(){
    return count == 0;
}

bool arrQueue::isFull(){
    return count == Max_Length;
}

void arrQueue::enQueue(int value){
    if(!isFull())
        cout<<"Full";
    reer=(reer+1)%Max_Length;
    arr[reer]=value;
    count ++;
}

void arrQueue::deQueue(){
    if(!isEmpty()) 
        cout<<"empty";
    front=(front+1)%Max_Length;
    count--;
}

void arrQueue::display(){
    if(!isEmpty()) {
        cout<<"empty";
    };
    for(int i=front;i!=reer+1;i=(i+1)%Max_Length){
        cout<<arr[i]<<" ";
    }
}