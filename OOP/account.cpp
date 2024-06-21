#include <iostream>
 using namespace std;

 class account{
    string name;
    string accountno;
    double bal;
    string securitycode;

public:
 void intialize(){
   string temp;
   cout<<"enter name :";
   getline(cin,temp);
   name=temp;
   cout<<"enter accountno :";
   getline(cin,temp);
   accountno=temp;
   cout<<"enter securitycode :";
   getline(cin,temp);
   securitycode=temp;
   cout<<"enter balance :";
   cin>>bal;

   cout<<"values entered name :"<<name<<" accountno :"<<accountno<<" security code :"<<securitycode<<" bal :"<<bal;


 }


 };

 int main(){
   account a;
   a.intialize();
 }