#include <bits/stdc++.h>
using namespace std;

void Insertion_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int j;
        j=i-1;
        int key;
        key=arr[i];
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
