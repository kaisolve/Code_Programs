#include <iostream>
using namespace std;
class account{
    private :
    int balance=0;
    public:
    account(){};
    account(int nb);
    void credit(int amount);
    void debit(int amount);
    void getaccount();
};

account::account(int nb){
if(nb>=0){
    balance==nb;
}
else{
    balance=0;
    cout<<"eror";
}
}
    void account::credit(int amount){
        if(amount>=0){
            balance+=amount;
        }
        else
        cout<<"invalclass credit amount";
    }

    void account::debit(int amount){
        if(balance>=amount && amount >=0){
            balance-=amount;
        }
        else
        cout<<"balance exceeded\n";
    }
    void account::getaccount(){
        cout<<balance;
    }
