#include <iostream>
using namespace std;

int inset_unsorted(int arr[],int n,int size,int key,int pos){
    if(n>=size){
        return n;
    }
    for(int i=n+1;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=key;
    return n+1;
}