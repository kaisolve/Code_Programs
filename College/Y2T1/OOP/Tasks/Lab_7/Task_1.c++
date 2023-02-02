#include <iostream>
using namespace std;
class distant{
    // friend distant operator / (distant &ob);
int fprice;
int distanc;
    public :
    distant(){}
    distant (int fpric,int dist ){
        fpric=fprice;
        dist=distanc;
    }
distant operator + (distant &obj){
    distant temp(0, 0);
    temp.distanc=distanc+obj.distanc;
    return temp;
}

distant operator * (distant &obj){
    distant nemw(0,0);
    nemw.distanc=distanc*obj.fprice;
    nemw.fprice=fprice*obj.fprice;
    return nemw;
}

distant operator / (int num){
    distant temp(0, 0);
    temp.distanc=distanc/num;
    return temp;
}

friend istream & operator >> (istream &is,distant &t){
    cout<<"\n enter ob1: ";
    is>>t.fprice;
    cout<<"\n enter ob2: ";
    is>>t.distanc;
    // t.dis=t.fprice*6;
    return is;
}
friend ostream & operator << (ostream &outputo,distant &t){
    outputo<<"\n total distance : "<<t.distanc<<endl;
    outputo<<t.fprice;
    // os<<"\n total fprice :"<<t.fprice;
}
};
    int main(){
    // distant ob1,ob2,ob3,ob4,ob5,ob6;
    // distant sumobj(0,0);
    // cin>>ob1>>ob2>>ob3>>ob4>>ob5>>ob6;
    // sumobj=ob1+ob2+ob3+ob4+ob5+ob6;
    // cout<<sumobj;
    // distant arv(0,0);
    // arv=sumobj/6;
    // cout<<arv;
    distant ob1,ob2;
    distant produc(0,0);
    cin>>ob1;
    produc=ob1;
    cout<<produc;
}