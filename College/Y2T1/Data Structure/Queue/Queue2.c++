#include <bits/stdc++.h>
#include "Queue2.h"
using namespace std;

int main(){
    queues q1;
    q1.enQueue(1);
    q1.enQueue(2);
    q1.enQueue(3);
    q1.enQueue(4);
    q1.deQueue();
    q1.display();
}