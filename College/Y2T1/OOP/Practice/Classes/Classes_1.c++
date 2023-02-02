#include<iostream>
using namespace std;
class ZooAnimal  
   {
    private:
      string name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (string n,int m,int b,int v); 
      void Destroy (); // destroy function
      string reptName ();
      int daysSinceLastWeighed (int today);
         };
//  void ZooAnimal::Destroy ()
//    {	
//     delete [] name;
//    }
   // -------- member function to return the animal's name
string ZooAnimal::reptName ()
   {
    return name;
   } 
    // -------- member function to return the number of days
   // -------- since the animal was last weighed
//     int ZooAnimal::daysSinceLastWeighed(int today)
//    {
//     int startday, thisday;
//     thisday = today/100*30 + today - today/100*100;
//     startday = weightDate/100*30 + weightDate - weightDate/100*100;
//     if (thisday < startday) 
//         thisday += 360;
//     return (thisday-startday);
  // }
      void ZooAnimal::Create (string n,int m,int b,int v){
       name=n;
        cageNumber=m;
       weightDate=b;
       weight=v;
      } 


    // ========== an application to use the ZooAnimal class
   int main ()
   {

    ZooAnimal bozo;
    
    bozo.Create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName() << endl;

    // bozo.Destroy ();
   }
