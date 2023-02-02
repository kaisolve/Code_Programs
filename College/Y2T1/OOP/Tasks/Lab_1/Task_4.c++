#include<iostream>
#include<cmath>
using namespace std;

int wholecheck(float num){
    int flag =1;
    if(ceil(num)==floor(num)){
        flag=0;
    }
    else 
    flag =1;    
    return flag;
}

int posscheck(int n){
    int flag=0;
    if(n>0){
    flag=1;
    }
    else if(n==0){
     flag=0;
    }
    else 
    flag=-1;
    return flag;
}

int fact(int n){
    int fact=1;
for(int i=n;i>0;i--){
    fact*=i;
}
return fact;
}

int main(){
float n;
cin>>n;
int poss; 
int whole=wholecheck(n);
if(whole==1){
    cout<<"Num must be whole ";
}
else{
    poss = posscheck(n);
    if(poss==1 ){
cout<<fact(n);
}
else if(poss==0 ){
    cout<<"1";
}
else{
    cout<<"Num Must Be Possitive ";
}
}
}