#include <bits/stdc++.h>
using namespace std;
class decimal{
int prefix;
int postfix;

public:
decimal(){};
decimal(int pre,int post){
pre=prefix;
post=postfix;
}

int operator ++ (int i){
    prefix++;}
int operator ++ (){
    postfix++;
}
friend istream & operator >> (istream &is,decimal &t){
    cout<<"\n prefix ";
    is>>t.prefix>>t.postfix;
    return is;
}
friend ostream & operator << (ostream &os,decimal &t){
    os<<"\n nom is:"<<t.prefix<<"."<<t.postfix;
   
}

};

int main(){
    decimal obj1;
    cin>>obj1;
    obj1++;
    cout<<obj1;
    ++obj1;
    cout<<obj1;
    
   
}