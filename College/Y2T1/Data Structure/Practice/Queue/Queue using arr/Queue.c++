#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;

int main(){
    arrQueue qu;
    qu.display();
    qu.enQueue(5);
    qu.enQueue(65);
    qu.enQueue(352);
    qu.deQueue();
    qu.display();
}