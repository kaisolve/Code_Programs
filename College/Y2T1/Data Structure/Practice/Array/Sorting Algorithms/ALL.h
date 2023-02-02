#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) 
                swap(arr[j],arr[j+1]);
        }
    }
}

void selection(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
            min=j;
            }
        }
        if(min!=i)
            swap(arr[i],arr[min]);
    }
}

void insertion(int arr[], int n){
    for(int i=1;i<n;i++){
        int value=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>value){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=value;
    }
}

void merge(int arr[],int i1,int i2,int j1,int j2){
    int temp[50];
    int i=i1,j=j1,k=0;
    while(i<=i2&&j<=j2){
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        if(arr[j]<arr[i])
            temp[k++]=arr[j++];
    }
    while(i<=i2)
        temp[k++]=arr[i++];
    while(j<=j2)
        temp[k++]=arr[j++];
    for(i=i1,j=0;i<=j2;i++,j++){
        arr[i]=temp[j];
    }
}

void merge_sort(int arr[],int l,int r){
    int mid;
    if(l<r){
        mid=(l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,mid+1,r);
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int partirion(int arr[],int l,int r){
    int pivot,i,j;
    pivot=arr[l];
    i=l;
    j=r+1;
    while(1){
        do{
            ++i;
        }while(arr[i]<=pivot);
        do{
            --j;
        }while(arr[j]>pivot);
        if(i>=j) break;
        swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;
}

void quick_sort(int arr[],int l,int r){
    if(l<r){
    int p=partirion(arr,l,r);
    quick_sort(arr,l,p-1);
    quick_sort(arr,p+1,r); 
    }
   
}