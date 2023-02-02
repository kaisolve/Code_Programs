//c++ program to insert item at anyposition
//unsorted array
#include <iostream>
using namespace std;
int insertfun(int arr[],int n,int size,int key,int pos){
    if(n>=size){
        return n;
    }
    else
    {
        for(int i=n+1;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=key;
        return n+1;
    }
   
}
int main()
{
    int arr[20] = {1, 2, 3, 1, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n=6;
    int key,pos;
    cout<<"enter key and position : ";
    cin>>key>>pos;

cout<<"\n before insertion";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
 n = insertfun(arr,n,size,key,pos);
cout<<"\n after insertion";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    }