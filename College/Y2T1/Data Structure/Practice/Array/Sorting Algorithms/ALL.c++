#include <bits/stdc++.h>
#include "ALL.h"
using namespace std;

int main(){
    int array[]={1,3,2,6,5};
    int n=sizeof(array)/sizeof(array[0]);
    merge_sort(array,0,n-1);
    printarr(array,n);
}