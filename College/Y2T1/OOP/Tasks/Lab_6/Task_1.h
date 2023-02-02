#include <iostream>
using namespace std;

class box{
    private:
    double width;
    public:
    friend void printwidth (box box);
    void setwidth(double wid);
};
void box::setwidth(double wid){
    width=wid;
}
void printwidth(box box){
    cout<< "width of box : "<<box.width<<endl;
}
