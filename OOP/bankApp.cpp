# include <iostream>
#include <string>


using namespace std;

class bankaccount{
    protected:
    string type ;
    string owner;
    string accountno;
    double balance;

virtual void withdraw(double w)=0;
virtual void credit(double c)=0;

public:
void display(){
    cout<<"current balance is:"<<balance<<endl;

}

bool verify(string s){
    return accountno.substr(accountno.length()-3)==s;
}



bankaccount(string t ,string o , string a , double b):type (t) ,owner(o),accountno(a),balance(b){}

~bankaccount(){

};

};

class SavingAccount: public bankaccount {
 double interest = 0.1;   
 int max =1000;


 public:

 SavingAccount(string o , string a , double b):bankaccount("saving",o,a,b){}
 ~SavingAccount();

 void withdraw(double w){


    if(w>balance){
        cout<<"cannot withdraw amount";
    }


    else if(w>max){
        cout<<"withdrawing max"<<endl;
        balance-=max;


    }

    else{
        cout<<"withdrawing";
    }




 }

 void credit(double c){
    if(c>0){
    cout<<"crediting"<<c;
    balance+=c;}
    else{
        cout<<"invalid ammount";
    }


}

};

class CheckingAccount: public bankaccount{

public:
CheckingAccount(string o , string a , double b):bankaccount("Current",o,a,b){}
~CheckingAccount();


 void withdraw(double w){


    if(w>balance){
        cout<<"cannot withdraw amount";
    }
    else{
        cout<<"withdrawing"<<w<<endl;
    }

 }


 void credit(double c){
   if(c>0){
    cout<<"crediting"<<c;
    balance+=c;}
    else{
        cout<<"invalid ammount";

 }


}};

class CertificateofDeposit: public bankaccount{
    double rate = 1.1;
    int maturity=7;
    int currentM=0;

public:

CertificateofDeposit(string o , string a , double b):bankaccount("bond",o,a,b){}
~CertificateofDeposit();


void withdraw(double w){

    if(maturity!=currentM){
        cout<<"cannot with draw"<<endl;

    }
    else if (w>balance){
        cout<<"cannot withdraw"<<endl;

    }

    else{
        cout<<"withdrawing"<<endl;
        balance-=w;

    }
}

void credit(double c){
    if(c<0){
        cout<<"invalid ammount"<<endl;
    }
   else if(maturity==currentM){
    cout<<"crediting"<<c;
    balance+=c;}
    else{
        cout<<"CREATE NEW BOND";

 }

}
};



int main(){
    SavingAccount A ("a","0123",1000);
    CheckingAccount B ("b","234",1000);
    CertificateofDeposit C ("c","345",1000);

bool run= true;
string temp,temp2;
double a;

while(run){
cout<<"enter owner";
cin>>temp;
cout<<"enter last three acoount digits";
cin>>temp2;
if (A.verify(temp2)) {
            A.display();
            cout<<"1.Deposit"<<"2.Credit"<<endl;
            cin>>temp;
            cout<<"amount";
            cin>>a;
            temp=="1"?A.withdraw(a):A.credit(a);
            run = false;
        } else if (B.verify(temp2)) {
            B.display();
            cout<<"1.Deposit"<<"2.Credit"<<endl;
            cin>>temp;
            cout<<"amount";
            cin>>a;
            temp=="1"?B.withdraw(a):B.credit(a);
            run = false;
        } else if (C.verify(temp2)) {
            C.display();
            cout<<"1.Deposit"<<"2.Credit"<<endl;
            cin>>temp;
            cout<<"amount";
            cin>>a;
            temp=="1"?C.withdraw(a):C.credit(a);
            run = false;
        } else {
            cout << "Invalid account number. Try again." << endl;
        }





}

}