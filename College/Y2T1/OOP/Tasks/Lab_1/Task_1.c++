#include<iostream>
using namespace std;
int main(){
    int n;
    int num=0;
    cin >> n;
    if(n%2==0){
       for(int i=n;i<n+40;i=i+2){
        cout<<i<<" ";
        num++;
    }}
    else {
        for(int i=n+1;i<n+40;i=i+2){
        cout<<i<<" ";
        num++;
    }
    } 
    cout<<"num = '" << num<<"'";
    }
    

