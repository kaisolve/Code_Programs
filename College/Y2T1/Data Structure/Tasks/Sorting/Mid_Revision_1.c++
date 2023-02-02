#include <bits/stdc++.h>
#include "Mid_Revision_1.h"
using namespace std;

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
    bubble_sort(array,n);
    cout<<"bubble array = ";
    printarr(array,n);
    cout<<" "<<"\n";
    selection_sort(array,n);
    cout<<"selection array = ";
    printarr(array,n);
    cout<<" "<<"\n";
    insertion_sort(array,n);
    cout<<"insertion array = ";
    printarr(array,n);
    cout<<" "<<"\n";
    quick_sort(array,0,n-1);
    cout<<"quick array = ";
    printarr(array,n);
    cout<<" "<<"\n";
    merge_sort(array,0,n-1);
    cout<<"merge array = ";
    printarr(array,n);
    cout<<" "<<"\n";
}

// int main(){
//     int arr[]={2,5,1,6,3,7,8,4};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     selection_sort(arr,size-1);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//         cout<<endl;
//     insertion_sort(arr,size-1);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//         cout<<endl;
//     quick_sort(arr,0,size-1);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//         cout<<endl;

//     merge_sort(arr,0,size-1);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }