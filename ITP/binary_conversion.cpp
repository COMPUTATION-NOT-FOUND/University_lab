#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
int main(){ 
    int remainder=0 , quotient=0, binary=0 , output=0 , counter=0 ;
    cout<<"enter a  binary number : ";
    cin>> binary;
    quotient=binary;
    counter=0;
    while(quotient!=0){
        //cout<< counter <<" counter \n";
        remainder=quotient%10;
        //cout<<remainder<< " remainder"<<'\n' ;
        quotient=quotient/10;
        //cout<<remainder<< " quotient"<<'\n' ;
        output+=remainder*pow(2,counter);
        //cout<<output<<" working"<<'\n';
        counter++;
    }
    cout<<output;
}
