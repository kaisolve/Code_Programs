#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;

int main(){
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.dequeue();
    q1.erasequeue();
    q1.display();
}