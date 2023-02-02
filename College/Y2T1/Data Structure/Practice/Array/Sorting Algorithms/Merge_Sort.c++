using namespace std;
#include <iostream>
#include "Merge_Sort_1.c++"
int main(){
    int arr[]={2,1,4,6,5,0,-2,9,89,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"\n\n unsorted arr";
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    mergesort(arr,0,n-1);
     cout<<"\n\n sorted arr";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}