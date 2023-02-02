// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;
 
// // A function to implement bubble sort
// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n - 1; i++)
 
//         // Last i elements are already
//         // in place
//         for (j = 0; j < n - i - 1; j++)
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j + 1]);
// }

// void bubblesort(int arr[],int n){
//     int i,j;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
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
    bubblesort(array,n);
    cout<<"new array = ";
    printarr(array,n);
    cout<<" "<<"\n";
}

