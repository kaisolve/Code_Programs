#include <iostream>
using namespace std;

class vision{
private:
float length;
float wclassth;
float area;

public:
void setlength(double l);
void setwclassth(double w);
vision();
vision(int l,int w);
void display();
~vision();

};

void vision::setlength(double l){
length = l;
};
void vision::setwclassth(double w){
    wclassth=w;
}

vision::vision(){
   length=48;
   wclassth=30;
};

void vision::display(){
    vision();
    cout<<"length ="<<length<<endl;
    cout<<"wclassth ="<<wclassth<<endl;
    this->area=length*wclassth;
    float price=area*65;
    cout<<"price ="<<price<<endl;
};

vision::~vision(){
    cout<<"have a nice day";
};

// void get(float len,float wclass){
//     cout<<"enter Length";
//     cin>>len;
//         cout<<"enter wclassth";
// cin>>wclass;
// return 
// };




