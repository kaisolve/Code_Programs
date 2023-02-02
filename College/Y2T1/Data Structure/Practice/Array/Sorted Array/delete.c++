//c++ program to delete item
//sorted array = unsorted array except for the search function
#include <iostream>
using namespace std;

// old search
// int searchfun(int arr[], int n, int key)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         if (arr[i] == key)
//             return i;
//     }
//     return -1;
// }

int binarysearch(int arr[],int low,int high,int key){
if(high<low){
    return -1;
}
else{
    int mclass=(high+low)/2;
    if(arr[mclass]==key){
        return mclass;
    }
    else if(arr[mclass]>key){
        return binarysearch(arr,low,mclass-1,key);
    }
    else {
        return binarysearch(arr,mclass+1,high,key);
    }
}
}

int deletefun(int arr[],int n,int value){
    int pos=binarysearch(arr,0,n-1,value);
    if(pos==-1){
        cout<<"not founded";
        return n;
    }
    else{
for(int i=pos;i<n-1;i++){
    arr[i]=arr[i+1];
}
return n-1;
    }
}


int main()
{
    int arr[] = {1, 2, 3, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << " enter key to search : ";
    cin >> key;
    cout<<"\n before insertion ";
    for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
    }
  n = deletefun(arr,n,key);
cout<<"\n after insertion ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}