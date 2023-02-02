#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    protected:
    string accountID;
    int balance;
    public:
    void balanceInquiry(){
        cout<<"account palance = "<<balance<<endl;
    };
    void ammountDeposit(int amount){
        balance+=amount;
    };
    void amountWithdwawn(int amount){
        if(balance>=amount){
            balance-=amount;
        }
        else
        cout<<"no enough money";
    };
};

class CurrentAccount : public BankAccount{
public:
CurrentAccount(){};
CurrentAccount(string a,int b){
    a=accountID;
    b=balance;
}
void amountWithdwawn(int amount){
    if((balance-amount)>=5000){
            balance-=amount;
    }
     else
        cout<<"no enough money";
};


};
class SavingAccount : public BankAccount{
public:
SavingAccount(){};
SavingAccount(string a,int b){
    a=accountID;
    b=balance;
}
void amountWithdwawn(int amount){
    if((balance-amount)>=10000){
            balance-=amount;
    }
     else
        cout<<"no enough money";
};
};