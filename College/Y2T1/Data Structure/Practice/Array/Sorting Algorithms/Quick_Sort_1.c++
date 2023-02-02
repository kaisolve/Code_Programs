#include <iostream>
#include <cmath>
using namespace  std;
// int partioning(int a[], int ibegin, int jend){
//     int pivot=a[ibegin];
//     int i=ibegin;
//     int j=jend;
//     while(i<j){
//         do{
//             i++;
//         } while(a[i]<pivot);
//         do{
//             j--;
//         } while(a[j]>pivot);
//          if(i<j){
//             int t;
//           t =a[i];
//           a[i]=a[j];
//           a[j]=t; 
//          }
         
//         }
//                int t=a[i];
// a[i]=a[j];
// a[j]=t;
//                 return j;

//     }

int partion(int a[],int l,int r){
int pivot,i,j,t;
pivot = a[l];
i=l;
j=r+1;
while(1){
    do{
        ++i;
    } while(a[i]<=pivot && i<=r);
    do{
        --j;
    } while (a[j]>pivot);
    if(i>=j) break;
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    
}
t=a[l];
a[l]=a[j];
a[j]=t;
return j;
}
// }
// void quicksorting(int a[],int ibegin,int jend){
// int j;
//     if(ibegin<jend){
//         j=partioning(a,ibegin,jend);
//         quicksorting(a,ibegin,j-1);
//         quicksorting(a,j+1,jend);

//     }

// }
void quicksort(int a[],int l,int r){
    int j;
    if(l<r){
        j=partion(a,l,r);
        quicksort(a,l,j-1);
        quicksort(a,j+1,r);
    }
}

