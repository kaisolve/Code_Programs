// c++ program to search in sorted array
// using binary search
#include <iostream>
using namespace std;

// binary search
int binarysearch(int arr[],int low,int high,int key){
    if(high<low)
        return -1;
    
    int mclass=(high+low)/2;
    if(key==arr[mclass])
        return mclass;
    
    if(key<arr[mclass])
        return binarysearch(arr,low,mclass-1,key);
    return binarysearch(arr,mclass+1,high,key);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[1]);
    int key;
    cout<<"enter key : ";
    cin>>key;
    int pos = binarysearch(arr,0,n-1,key);
    if(pos==-1)
        cout<<"not founded";
    else
    cout<<"position is : "<<pos;
}

