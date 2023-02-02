//c++ program to insert item to the end
//unsorted array
#include <iostream>
using namespace std;
int insertfun(int arr[],int n,int size,int key){
    if(n>=size){
        return n;
    }
    else
    arr[n]=key;
    return (n+1);
}
int main()
{
    int arr[20] = {1, 2, 3, 1, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n=6;
 int key;
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