#include <bits/stdc++.h>
using namespace std;

// void selectionSort(int arr[], int n)
// {
//     int i, j, min_classx;
 
//     // One by one move boundary of
//     // unsorted subarray
//     for (i = 0; i < n-1; i++)
//     {
       
//         // Find the minimum element in
//         // unsorted array
//         min_classx = i;
//         for (j = i+1; j < n; j++)
//         if (arr[j] < arr[min_classx])
//             min_classx = j;
 
//         // Swap the found minimum element
//         // with the first element
//         if(min_classx!=i)
//             swap(&arr[min_classx], &arr[i]);
//     }
// }


//Swap function
// void swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }
void swap(int *n,int *m){
    int temp=*n;
    *n=*m;
    *m=temp;
}

//  void selectionsort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min]){
//                 min=j;
//             } }      
//        if(min!=i){
//             swap(&arr[min],&arr[i]);
//             }
//     }
//  }

void selectionsort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
int min=i;
for(int j=i+1;j<n;j++){
       if(arr[j]<arr[min]){
            min=j;
        }
}
       if(min!=i){
        swap(&arr[min],&arr[i]);
    }
}
    }
  

    
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[]={1,3,2,6,5};
    int n=sizeof(array)/sizeof(array[0]);
    cout<<"oldn array = ";
    printarr(array,n);
    cout <<" " <<"\n";
    selectionsort(array,n);
    cout<<"new array = ";
    printarr(array,n);
    cout<<" "<<"\n";
}

