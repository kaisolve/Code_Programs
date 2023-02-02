#include <iostream>
#include <cmath>
using namespace std;
class mem{
friend class fun;
int a;
int b;
int c;
public:
mem();
mem(int a,int b,int c);
};
mem::mem(int a,int b,int c){
    this->a=a;
    this->b=b;
    this->c=c;
}
class fun{
    public:
    int sos(mem obj){
        int out=pow((obj.a+obj.b+obj.c),2);
        return out;    
    }
    int sod(mem obj){
        int out= pow((obj.a-obj.b-obj.c),2);
        return out;
    }
    int m(mem obj){
        int mean=(obj.a+obj.b+obj.c)/3;
        return mean;
    }

};