//c++ program to delete item
//unsorted array
#include <iostream>
using namespace std;
int searchfun(int arr[], int n, int key)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int deletefun(int arr[],int n,int value){
    int pos=searchfun(arr,n,value);
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
    int arr[] = {1, 2, 3, 1, 3, 7};
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