#include <iostream>
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

int delete_item(int arr[],int n,int target){
    int position=Binary_Search(arr,0,n-1,target);
    if(position==-1){
        cout<<"not founded";
        return n;
    }
    for(int i=position;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    return n-1;
}