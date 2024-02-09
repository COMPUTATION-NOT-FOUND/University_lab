#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
 
int main(){
    int integer,palindrome,counter,integer2,remainder;
    cout<<"input an inetger : ";
    cin>>integer;
    integer2=integer;
    counter=0;
    palindrome=0;
    while(integer2!=0){
        remainder=integer2%10;
        cout<<"remainder"<<remainder<<"\n";
        palindrome=palindrome*10+remainder;
        cout<<"reversed"<<palindrome<<'\n';
        integer2=integer2/10;
        cout<<"remaining numbers"<<integer2<<'\n';
        counter+=1;

    }
    if(palindrome==integer)
    cout<<"a plaindrome \n";
    else
    cout<<"not a plaindrome \n";

    cout<<counter<<" letter count\n";






}
