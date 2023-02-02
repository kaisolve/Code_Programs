#include <bits/stdc++.h>
using namespace std;
class fraction{
friend fraction operator + (fraction &ob);
double nomerator;
double donimerator;
public:
fraction(){};
fraction(double num,double dom){
num=nomerator;
dom=donimerator;
}

// fraction operator + (fraction &obj){
//     fraction temp(0, 0);
//     temp.nomerator=nomerator+obj.nomerator;
//     temp.donimerator=donimerator;
//     return temp;
// }
// fraction operator - (fraction &obj){
//     fraction temp(0, 0);
//     temp.nomerator=nomerator-obj.donimerator;
//     temp.donimerator=donimerator;
//     return temp;
// }

fraction operator * (fraction &obj){
    fraction temp(0, 0);
    temp.nomerator=nomerator*obj.donimerator;
     temp.donimerator=donimerator*obj.donimerator;
    return temp;
}
friend istream & operator >> (istream &is,fraction &t){
    cout<<"\n enter nom ";
    is>>t.nomerator;
    cout<<"\n enter dom ";
    is>>t.donimerator;
    return is;
}
friend ostream & operator << (ostream &os,fraction &t){
    os<<"\n total nom :"<<t.nomerator;
    os<<"\n total nom :"<<t.donimerator;
}

};
// int main(){
//     fraction obj1,obj2;
//     fraction sum(0,0);
//     cin>>obj1>>obj2;
//     sum=obj1+obj2;
//     cout<<sum;

// }


class fract{
private:
friend fract operator * (fract &ob);
int nomi;
int domi;
public:
fract(){};
fract(int nom,int dom){
    nom=nomi;
    dom=domi;
}

// fract operator + (fract &ob){
//     fract temp(0,0);
//     temp.nomi=nomi+ob.nomi;
//     temp.domi=domi;
// }
fract operator * (fract &ob1){
    fract temp(0,0);
    temp.nomi=nomi*ob1.domi;
    temp.domi=domi*ob1.domi;
    return temp;
}

friend istream & operator >> (istream &ipu,fract &ob1){
    cout<<"nomi : ";
    ipu>>ob1.nomi;
    cout<<"domi : ";
    ipu>>ob1.domi;
    return ipu;
}
friend ostream & operator << (ostream &outp,fract &ob1){
    cout<<"nomi : ";
    outp<<ob1.nomi;
    cout<<"domi : ";
    outp<<ob1.domi;
}
};

int main(){
    fract ob2,ob3;
    fract sum(0,0);
    cin>>ob2>>ob3;
    sum=ob2*ob3;
    cout<<sum;
}