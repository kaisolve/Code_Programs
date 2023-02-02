#include <iostream>
using namespace std;

class empl{
private:
string em_name;
int em_salary;
public:
void accept(string em_name, int em_salary){
this->em_name=em_name;
this->em_salary=em_salary;
}
void display(){
    cout<<em_name<<" ";
    cout<<em_salary<<" ";
}
};

class dist{
int feet;
int inch;
public:
dist(){
        feet=inch=0;
}
dist(int f,int in){
feet=f;
inch=in;
}
int getfeet(){
    return feet + inch/12;
}
void print(){
cout<<feet<<" = "<<inch<<" inches ";
}

};

string mindis(dist d1,dist d2){
    int dis1=d1.getfeet();
    int dis2=d2.getfeet();
    return (dis1>=dis2? "D1":"D2");

}

class rec{
int len=1,wid=1;
public:
void setlen(int l){
    if(l>100||l<0)
        throw "not";
    else len=l;
}
void setwid(int w){
    if(w>100||w<0)
        throw "not";
    else wid=w;
}
void per(){
    cout<<2*len+2*wid;
}
void area(){
    cout<<len*wid;
}


};

int main(){
// empl em1,em2;
// em1.accept("n1",500);
// em2.accept("n2",400);
// em1.display();
// em2.display();

dist D1(55,60),D2(20,30);
cout<<mindis(D1,D2);

// rec r1;
// try{
//     r1.setlen(10);
//     r1.setwid(10);
//     r1.area();
//     cout<<"\n";
//     r1.per();
// }
// catch (const char* msg) {
//      cerr << msg << endl;
// }



}