#include <iostream>
using namespace std;
// elements sent to merge function are indexes
void merge(int a[],int i1, int i2,int j1,int j2){
    int temp[50]; //new arr for merging
    int i=i1,j=j1,k=0;
    while(i<=i2&&j<=j2) //while elements in both lists
    {
        if(a[i]<a[j])
        temp [k++]=a[i++];
        else
        temp[k++]=a[j++];
    }
    while(i<=i2)
    temp[k++]=a[i++]; // copy to arr temp first
    while(j<=j2)
    temp[k++]=a[j++]; // copy to arr temp second
    for(i=i1,j=0;i<=j2;i++,j++)
    a[i]=temp[j]; //transfer elements from temp to arr a

}
void mergesort(int a[],int i, int j){
    int mid;
    if(i<j){
        mid=(i+j)/2;
        //left recursion 
        mergesort(a,i,mid);
        //right recursion 
        mergesort(a,mid+1,j);
        //merrge the two sodted sub arr
        merge(a,i,mid,mid+1,j);
    }
}
