#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
int main(){
    unsigned int integer1 , integer2,gcd,counter,smallernum;
    cout<<"enter number1 ";
    cin>>integer1;
    cout<<"enter number2 ";
    cin>>integer2;
    if (integer1>integer2)
    smallernum=integer2;
    else
    smallernum=integer1;
    counter=1;


    while(counter<=smallernum){
        if((integer1%counter)==0 && (integer2%counter)==0){
            gcd=counter;
        }
        counter++;
    }
    cout<<gcd;
}