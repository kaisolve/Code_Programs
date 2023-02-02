#include<iostream>
using namespace std;
// #include "Task_2.h"
// #include "Task_2.c++"
#include <stdexcept>
class LCD{
    string modelNo;
    int screenSize;
    float itemPrice;
    public:
    LCD(int scre, float item);
    void setmodeln(string mod);
    void setscreensize(int scre);
    void setitemprice(float item);
    string getmod();
    int getscre();
    float getpric();
};

    LCD::LCD( int scre, float item){
    // modelNo="empty";
    if(scre>30&&scre<55){
          screenSize=0;   
    }
    else
    throw invalid_argument("invalid size");

 if(item>0&&item<90000){
          itemPrice=0.0;   
    }
    else
    throw invalid_argument("invalid price");

    }
     void LCD::setmodeln(string mod){
        modelNo=mod;
     };
    void LCD::setscreensize(int scre){
        screenSize=scre;
    };
    void LCD::setitemprice(float item){
        itemPrice=item;
    };

       string LCD::getmod(){
        return modelNo;
       };
    int LCD::getscre(){
        cout<<screenSize<<endl;
return screenSize;

    };
    float LCD::getpric(){
        cout<<itemPrice<<endl;
return itemPrice;
    };

    int main(){
         try{
        LCD r(33,4.3);
        r.getpric();
        r.getscre();
    }
     catch(invalid_argument e){
        cerr<<e.what()<<endl;
    }   
      try{
        LCD r(5,-10);
        r.getpric();
        r.getscre();
    }
     catch(invalid_argument e){
        cerr<<e.what()<<endl;
    }   
    }
