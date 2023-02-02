#include <bits/stdc++.h>
using namespace std;
// void bubble_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;i++){
//             if(arr[j]>arr[j+1])
//                 swap(arr[j],arr[j+1]);
            
//         }
//     } 
// }
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
// void selection_sort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//     int min=i;
//     for(int j=i+1;j<n;i++){
//         if(arr[j]<arr[min]){
//                 min =j;
//             }
//         }
//         if(min!=i){
//                     swap(arr[min],arr[i]);

//         }
//     }
// }

void selection_sort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
int min=i;
for(int j=i+1;j<n;j++){
       if(arr[j]<arr[min]){
            min=j;
        }
}
       if(min!=i){
        swap(arr[min],arr[i]);
    }
}
    }
  
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(key<arr[j]&&j>=0){
            arr[j+1]=arr[j];  
            --j;

        }
            arr[j+1]=key;
    }
}
int partion(int arr[], int left, int right){
    int pivot=arr[left];
    int i=left;
    int j=right+1;
    while(1){
        do{
            ++i;
        }while(arr[i]<=pivot&&i<=right);
        do{
            --j;
        }while(arr[j]>pivot);
        if(i>=j)
        break;
        swap(arr[i],arr[j]);
    }
    swap(arr[left],arr[j]);
    return j;
}
void quick_sort(int arr[],int left,int right){
int j;
if(left<right){
    j=partion(arr,left,right);
    quick_sort(arr,left,j-1);
    quick_sort(arr,j+1,right);
}
}
void merge(int arr[],int i1,int i2,int j1,int j2){
    int temp[50];
    int i=i1,j=j1,k=0;
    while(i<=i2&&j<=j2){
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
    for(int i=i1,j=0;i<=j2;i++,j++){
        arr[i]=temp[j];
    }
    }
    void merge_sort(int arr[],int i, int j){
        int mid=(i+j)/2;
        if(i<j){
            merge_sort(arr,i,mid);
            merge_sort(arr,mid+1,j);
            merge(arr,i,mid,mid+1,j);
        }
        
    }