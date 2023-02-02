#include <iostream>
using namespace std;

int Partition(int arr[],int left,int right){
int pivot,i,j;
pivot=arr[left];
i=left;
j=right+1;

while(1){
    do{
        ++i;
    }while(arr[i]<=pivot&&i<=right);
    do{
        --j;
    }while(arr[j]>pivot);
    if(i>=j)break;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    
}
int temp =arr[left];
arr[left]=arr[j];
arr[j]=temp;
return j;
}
void Quick_sort(int arr[],int left,int right){
    int j;
    if(left<right){
        j=Partition(arr,left,right);
        Quick_sort(arr,left,j-1);
        Quick_sort(arr,j+1,right);
    }
}