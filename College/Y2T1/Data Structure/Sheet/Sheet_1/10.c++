#include <bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        if(arr[min]!=arr[i])
            {
                    int temp=arr[min];
                    arr[min]=arr[i];
                    arr[i]=temp;
                }
    }
}

