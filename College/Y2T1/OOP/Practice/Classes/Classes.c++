#include <iostream>
#include <algorithm>
using namespace std ;
//  class car{
// private:
//     // char name;
//     // char color;
//     int maxspeed;
//     int model;
  
// public:
//     string sgname(string n){
//      string name=n;
//      return name;
//     }
    
//     string sgcolor(string n){
//         string color=n;
//         return color;
//     }
//     int sgmaxspeed(int m){
//         int maxspeed =m;
//         return maxspeed;
//     }
//     int sgmodel(int m){
//         int model=m;
//         return model;
//     }

// };

class areas{
    private:
    int base;
    int height;
    int area;
    public:
    void setarea(int n,int m){
        base =n;
        height =m;
        }
    int getarea(){
    return area=base + height;
    }
    
};

int main(){
// car x;

// int speed,model;
// string name,color;
// cout<<"enter name \n ";
// cin >> name;
// cout<<"enter color \n ";
// cin >> color;
// cout<<"enter model \n ";
// cin >> model;
// cout<<"enter speed \n ";
// cin >> speed;
// cout<<x.sgname(name)<<"\n";
// cout<<x.sgcolor(color)<<"\n";
// cout<<x.sgmaxspeed(speed)<<"\n";
// cout<<x.sgmodel(model)<<"\n";


areas square;
int n,m;
cout<<"enter n,m";
cin >> n >> m;
square.setarea(n,m);
cout<<square.getarea();
 }