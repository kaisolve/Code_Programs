#include <iostream>
#include <cmath>
using namespace std;
class solv{
private:
friend class fun;
int a;
int b;
int c;
public:
solv();
solv(int a,int b, int c);
};
solv::solv(int a,int b,int c){
    this->a=a;
    this->b=b;
    this->c=c;
}
class fun{
    public:
    int out1(solv ob){
        int out1=(((-ob.b)+(sqrt((pow(ob.b,2)-(4*ob.a*ob.c)))))/2*ob.a);
        return out1;
    }
    int out2(solv ob){
        int out2=(((-ob.b)-(sqrt((pow(ob.b,2)-(4*ob.a*ob.c)))))/2*ob.a);
        return out2;
    }

};