#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
int main(){
    int integer,temp1,temp2,temp3,temp4;
    cout<<"input 4 digit integer :";
    cin>>integer;
    temp1=integer%10;
    cout<<temp1 <<"\n";
    temp2=(integer%100)/10;
    cout<<temp2 <<"\n";
    temp3=(integer%1000)/100;
    cout<<temp3 <<"\n";
    temp4=(integer/1000);
    cout<<temp4 <<"\n";
    if(temp1 == temp4 && temp2==temp3)
    cout<<"it is a palindrome";
    else
    cout<<"Not a palindrome";
}