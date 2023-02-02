//c++ program to insert item at any position
//sorted array == unsorted array
#include <iostream>
using namespace std;
int insertfun(int arr[],int n,int size,int key){
    if(n>=size){
        return n;
    }
    else
    {
        int i;
        for(i=n;(i>=0&&arr[i-1]>key);i--){
            arr[i]=arr[i-1];
        }
        arr[i]=key;
        return n+1;
    }
   
}
int main()
{
    int arr[20] = {1, 2, 3, 7, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n=6;
    int key;
    cout<<"enter key : ";
    cin>>key;

cout<<"\n before insertion";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
 n = insertfun(arr,n,size,key);
cout<<"\n after insertion";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    }