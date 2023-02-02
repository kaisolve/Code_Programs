#include <bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[],int i,int j,int target){
    if(i>j){
        return -1;
    }
    int mid;
    mid=(i+j)/2;
    if(target<mid)
        return Binary_Search(arr,i,mid-1,target);
    else if(target>mid)
        return Binary_Search(arr,mid+1,j,target);
    else
        return mid;
}
