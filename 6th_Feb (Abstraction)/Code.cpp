#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

class ATM {
    public:
    virtual void withdrawMoney(int amount)  = 0 l
    virtual void checkBalance() = 0 ;

};
class Myatm : public ATM {
    private: 
    int balance = 1000;

    public:
    void withdrawMoney(int amount) override {
        if(amount <= balance)
        {
            balance -= amount ;
            cout<<"Amount Withdrawn: "<<amount<<endl;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }

    void checkBalance() override {
        cout<<"Balance: "<<balance<<endl;
    }
};

int main()
{

}