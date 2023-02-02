#include<iostream>
#include<iomanip>
using namespace std;
class ITEM{
private:
int itCode;
string itName;
float itPrice;
int itQty;
float itOffer;
public:
ITEM(){};
void GetOffer(){
    if(itQty<=50){
        itOffer=0;
    }
    else if (50<itQty<=100)
    {
        itOffer=5;
    }
    else if(itQty>100){
        itOffer=10;
    }    
}
void GetStock(int Code,string Name,float Price,int Qty){
itCode=Code;
itName=Name;
itPrice=Price;
itQty=Qty;
}
void ShowItem(){
    cout << itCode<<" "<<itName<<" "<<itPrice<<" "<<itQty<<" "<<itOffer<<"\n";
}
};

class Circle{
private:
double radius=1.0;
string color="red";
public:
Circle(){};
double getRadius(double r){
    radius=r;
}
string getColor(string c){
    color=c;
}
double getArea(){
    return 22/7*radius*radius;
}
};

class Time{
private:
int hours;
int minutes;
int seconds;
public:
Time(){
    hours=minutes=seconds=0;
}
void read(int h,int m,int s){
    hours=h;
    minutes=m;
    seconds=s;
}
Time operator + (Time obj){
    Time temp;
    temp.read(0,0,0);
    temp.hours=hours+obj.hours;
    temp.minutes=minutes+obj.minutes;
    temp.seconds=seconds+obj.seconds;
    temp.hours+=temp.minutes/60,temp.minutes+=temp.seconds/60;
    temp.seconds%=60,temp.minutes%=60;temp.hours%=24;
    return temp;
} 
void display(){
    cout<<setw(2)<<setfill('0')<< hours<<":"
    <<setw(2)<<setfill('0')<<minutes<<":"
    <<setw(2)<<setfill('0')<<seconds;
}
};

int main(){
Time t1,t2,t3;
t1.read(3,50,23);
t2.read(4,20,40);
t3=t1+t2;
t3.display();
}

