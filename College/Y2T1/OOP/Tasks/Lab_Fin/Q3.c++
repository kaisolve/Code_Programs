#include<iostream>
using namespace std;

int main(){
    int n,remainder=0,reverse=0;
    cin>>n;
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    cout<<reverse;
    
    
    int x=0;
    for(int i=93;i>=47;i--){
        if(x>=10){
            x=0;
            i+=1;
            cout<<"\n";
        }
        else{
            cout<< i <<" ";
            x++;
        }
        
    }

int y=0;
    for(int t=-20;t<=20;t++){
        if(t>=0){
            y=-3*t*t+5;
            cout<<t<<" "<<y<<"\n";
        }
        else{
             y=3*t*t+5;
            cout<<t<<" "<<y<<"\n";
        }
    }

}
//54 
// 4
// 4
// 5.4
// 0.54
// 40+54
// 
// 
// 