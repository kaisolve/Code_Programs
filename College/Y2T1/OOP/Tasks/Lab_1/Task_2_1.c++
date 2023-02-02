#include<iostream>
using namespace std;

void pow(int &power,int b,int e){

if(e==0){
    power=1;
}
else {
    for(int i=0;i<e;i++){
        power*=b;
    }
}
}
int main(){
    int power =1;
    int b,e;
    cin>>b>>e;
    pow(power,b,e);
    cout<<power;
}