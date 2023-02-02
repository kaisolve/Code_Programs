#include <iostream>
using namespace std;
int sum(int poin[]){
    int sum=0;
for(int i=0;i<20;i++){
sum+=poin[i];
}
return sum;
}
int main(){
int array[20];
int *poin;
poin=array;
for(int i=0;i<20;i++){
    cin>>poin[i];
}
int sums=sum(poin);
cout<<sums;
}