
#include<iostream>
using namespace std;
// #include "Task_2.h"
// #include "Task_2.c++"
#include <stdexcept>
class RealEstate{
    char hLocation;
    float housePrice;
    int roomCount;
    // public:
    public:
    RealEstate(char location, float hous,int room);
    void show();
    
};
RealEstate::RealEstate(char location, float hous,int room){
        if(location == 'S'||location='N'||location=='W'||location=='E')
        hLocation=location;
        else
        throw invalid_argument("invalid haus locationation");
 if(hous<100000)
    housePrice=hous;
    else 
    throw invalid_argument("invalid haus price");
    if(room>=0)
    roomCount=room;
    else
    throw invalid_argument("invalid room count");
    };
 void RealEstate::show(){
    cout<<  housePrice <<endl;
    cout<< roomCount<<endl;
   }
int main(){
    try{
        RealEstate r(S,5000,4);
        r.show();
    }
     catch(invalid_argument e){
        cerr<<e.what()<<endl;
    }   
}