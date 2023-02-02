#include<iostream>
using namespace std;

class MusicalInstrument{
    protected:
    string instrumentName;
    double price;
    public:
    MusicalInstrument(){};
    MusicalInstrument(string MusicalIns,double pric){
        instrumentName=MusicalIns;
        price=pric;
    }
    void displayPrice(string MusicalIns){
        cout<<price;
    }
};
class Flute: public MusicalInstrument{
public:
Flute(){};
Flute(string MusicalIns,double pric){
  instrumentName=MusicalIns;
  price=pric;   
}
};

class Guitar: public MusicalInstrument{
public:
Guitar(){};
Guitar(string MusicalIns,double pric){
  instrumentName=MusicalIns;
  price=pric;   
}
};

int main(){
    MusicalInstrument MU1;
    string flute;
    string guitar;
    Flute mu2(flute,50);
    Guitar mu3(guitar,30);
    // mu2.displayPrice(flute);
    mu2.displayPrice(flute);
    cout<<endl;
    mu3.displayPrice(guitar);
    
    // mu2.displayPrice();
    // mu3.displayPrice(guitar);
    // Mu1.displayPrice();
    // Flute.displayPrice(&Flute);
    // Guitar.displayPrice(&Guitar);
}