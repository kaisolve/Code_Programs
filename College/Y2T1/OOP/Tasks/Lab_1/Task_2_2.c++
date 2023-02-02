#include<iostream>
using namespace std;
int power(int &b,int &e){
    int power=1;
    if(e==0){
        return 1;
    }
    else {
        for(int i=0;i<e;i++){
    power*=b;
    }
return power;
    }
    
}
int main(){
    int base,exponent;
    cin>>base>>exponent;
    cout << power(base,exponent);
}
