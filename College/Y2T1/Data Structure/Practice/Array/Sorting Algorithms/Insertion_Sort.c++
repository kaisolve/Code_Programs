#include <bits/stdc++.h>
using namespace std;

//     void insertionsort(int arr[], int n)
// {
//     int i, key, j;
//     for (i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
 
//         // Move elements of arr[0..i-1], 
//         // that are greater than key, to one
//         // position ahead of their
//         // current position
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// void insertionsort(int arr[],int n){
//     int key;
//     for(int i=1;i<n;i++){
//         key=arr[i];
//         int j=i-1;
//         while (j>=0&&arr[j]>key)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
// }

// void insertionsort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int key,j;
//         key=arr[i];
//         j=i-1;
//         while(j>=0&&arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
// }

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key,j;
        key=arr[i];
        j=i-1;
        while (j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;        
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[]={1,3,2,6,5};
    int n=sizeof(array)/sizeof(array[0]);
    cout<<"oldn array = ";
    printarr(array,n);
    cout <<" " <<"\n";
    insertionsort(array,n);
    cout<<"new array = ";
    printarr(array,n);
    cout<<" "<<"\n";
}

