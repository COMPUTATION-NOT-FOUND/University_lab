#include<iostream>
#include<vector>
#include <cmath>
using namespace std;


class Account{
    float amount=0;


    public:
    void debit(float a){
        if(a>amount){
            cout<<"insufficient balance"<<endl;
        }
        else{
            amount=amount-a;
            cout<<"new amount :"<<amount<<endl;

        }}

    void credit(float a){
        amount=amount+a;
        cout<<"new amount :"<<amount<<endl;

    }
    void balance(){
        cout<<"current amount "<<amount<<endl;
    }
    Account(int a)
    {
        amount=a;
    }

    };

    int main(){
Account a(1000);
a.debit(1001);
a.credit(1001);
a.debit(2000);
a.balance();
}
