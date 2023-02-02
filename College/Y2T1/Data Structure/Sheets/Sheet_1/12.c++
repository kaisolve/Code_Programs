#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int i1,int i2, int j1, int j2){
    int temp[50];
    int i=i1,j=j1, k=0;
    while(i<=i2 && j<=j2){
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    while(i<=i2){
        temp[k++]=arr[i++];
    }
    while(j<=j2){
        temp[k++]=arr[j++];
    }
    for(i=i1,j=0;i<=j2;i++,j++){
        arr[i]=temp[j];
    }
}
void Merge_sort(int arr[],int i,int j){
    int mid;
    if(i<j){
        mid=(i+j)/2;
        Merge_sort(arr,i,mid);
        Merge_sort(arr,mid+1,j);
        Merge(arr,i,mid,mid+1,j);
    }
}