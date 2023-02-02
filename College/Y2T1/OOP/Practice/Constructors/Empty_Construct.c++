#include <iostream>
#include <algorithm>
using namespace std ;

class areas{
    private:
    int base; 
    int height;
    int area;
    public:
    areas(){
        cout<<"first constructor\n";
        base=0;
        height=0;
    }
    areas(){

    }
    void setarea(int n,int m){
        base =n;
        height =m;
        }
    int getarea(){
    return area=base + height;
    }
    
};

int main(){  
areas square;
// int n,m;
// cout<<"enter n,m";
// cin >> n >> m;
// square.setarea(5,3);
cout<<square.getarea();

 }