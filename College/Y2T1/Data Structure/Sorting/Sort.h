#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
    }
}

void merge(int arr[],int i1,int i2,int j1,int j2){
    int temp[50];
    int k=0,i,j;
    i=i1,j=j1;
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
    
    for(i=i1,j=0;i<=j2;i++,j++)
        arr[i]=temp[j];
}

void merge_sort(int arr[], int i, int j){
    int mid;
    if(i<j){
        mid=(i+j)/2;
        merge_sort(arr,i,mid);
        merge_sort(arr,mid+1,j);
        merge(arr,i,mid,mid+1,j);
    }
       
}

int partition(int arr[],int l,int r){
    int pivot,i,j;
    pivot=arr[l];
    i=l;
    j=r+1;
    while(1){
        do{
            ++i;
        }while(arr[i]<=pivot&&i<=r);
        do{
            --j;
        }while(arr[j]>pivot);
        if(i>=j) break;
        swap(arr[l],arr[r]);
    }
    swap(arr[l],arr[j]);
    return j;
}

void quick_sort(int arr[],int l,int r){
    int j;
    if(l<r){
        j=partition(arr,l,r);
        quick_sort(arr,l,j-1);
        quick_sort(arr,j+1,r);
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}