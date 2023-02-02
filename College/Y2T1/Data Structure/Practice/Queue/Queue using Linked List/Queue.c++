#include<bits/stdc++.h>
#include "Queue.h"
using namespace std;

int main(){
    Queue q;
    q.enQueue(45);
    q.enQueue(40);
    q.enQueue(23);
    q.deQueue();
    q.enQueue(3);
    // q.display();
    q.eraseQueue();
    q.display();
}