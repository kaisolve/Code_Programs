#include<iostream>
using namespace std;
#include "Task_2.h"
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
cout<<hLocation;
cout<<housePrice;
cout<<roomCount;
};
   