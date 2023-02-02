#include<iostream>
using namespace std;
class laptop{
private:
string brand;
string model;
int serial;
string color;
double price;
double processor;
int ram;
double screen;

public:
void setvalues(string br,string mod,int ser,string col,double pri,double pro,double scr){
brand = br;
model=mod;
serial=ser;
color=col;
price=pri;
processor=pro;
screen=scr;

}
void setram(int ra){
    ram=ra+1;
}
void printlaptop(){
    cout<<"brand = "<<brand<<endl;
    cout<<"model = "<<model<<endl;
    cout<<"serial = "<<serial<<endl;
    cout<<"color = "<<color<<endl;
    cout<<"price = "<<price<<endl;
    cout<<"ram = "<<ram<<endl;
    cout<<"processor = "<<processor<<endl;
    cout<<"screen ="<< screen<<endl;
}

};
int main(){
    int seri,ramm;
    string bran,mode,colo;
    double pric,scre,proc;
    laptop lap;
    cin>>bran>>mode>>seri>>colo>>pric>>proc>>ramm>>scre;
    lap.setvalues(bran,mode,seri,colo,pric,proc,scre);
    lap.setram(ramm);
    lap.printlaptop();
}