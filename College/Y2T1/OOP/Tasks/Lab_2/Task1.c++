#include <iostream>
using namespace std;
class cyrclas{
private :
int radios;
int hight;
public:
void setradios(int r){
     radios=r;
     cout<<radios;
}
void sethight(int h){
    hight=h;
    cout<<hight;
}
int getvolume(int h,int r){
    int volume = 3.14*r*r*r*h;
    return volume;
}
};

int main(){
    int hight,radios;
    cout<<"enter hight, radios : ";
    cin>>radios>>hight;
    cyrclas v;
    cout<<"radios= ";
    v.setradios(radios) ;
    cout<<"\n hight= ";
   v.sethight(hight);
   

    int volume = v.getvolume(hight,radios);
cout<< "\n volume= "<<volume;
}