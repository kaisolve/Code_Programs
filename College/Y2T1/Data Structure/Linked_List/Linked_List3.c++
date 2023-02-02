#include <bits/stdc++.h>
#include "Linked_List3.h"
using namespace std;

int main(){
    double_list d1;
    d1.push(5);
    d1.push(2);
    d1.push_back(4);
    d1.push_back(3);
    d1.display(); //2 5 4 3
    d1.pop();
    d1.display(); // 5 4 3
    d1.pop_back();
    d1.display(); // 5 4
    d1.insert_at_pos(10,2);
    d1.display(); // 5 4 10
    d1.pop_item(10);
    d1.display(); // 5 4
    d1.reverse(); // 4 5
}
