#include <iostream>
#include "Quick_Sort_1.c++"
using namespace  std;
int main(){
    int i,a[]={7,12,1,-2,0,15,4,10,9,98};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"\n\nunsorted arr is ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    quicksort(a,0,n-1);
    cout<<"\n\nsorted arr is ";
    for(int i=0;i<n;i++)
    cout<< a[i] <<" ";    
}