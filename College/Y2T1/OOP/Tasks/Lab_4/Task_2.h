#include <iostream>
using namespace std;

class invoice{
private:
string num;
string des;
int quantaty;
int price;
public:
// int setnum();
// int getnum();
// int setdes();
invoice(int pri,int qua);
void setquan(int q);
void setpri(int p);
int getinvoice();
invoice(){};
};

invoice::invoice(int pri,int qua){
    pri=price;
    qua=quantaty;
};

void invoice::setquan(int q){
    if(q>=0){
        quantaty=q;
    }
    else
    quantaty=0;
}

void invoice::setpri(int p){
    if(p>=0){
        price=p;
    }
    else
        price=0;
}

int invoice::getinvoice(){
return price*quantaty;
};
