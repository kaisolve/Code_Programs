#include <iostream>
using namespace std;


class areas{
    private:
    int length;
    int wclassth;
    int area;
    public:
    void changelength(int len){
        length=len+1;
        cout<<length;
    }
    void changewclassth(int wclass){
        wclassth=wclass+1;
        cout<<wclassth;
    }
    void getarea(){
    area = length*wclassth;
    // cout<< area;
    }
    void displayar(){
    //    int newarea=area;
        cout << area;
    }
    
};
int main(){
    int leng,wclasst;
    cin>>leng>>wclasst;
    areas area;
    cout<<"new length =";
    area.changelength(leng);
    cout<<"\n new wclassgth =";
    area.changewclassth(wclasst);
    cout<<"\n area = ";
    area.getarea();
    area.displayar();
// area.getarea();
}