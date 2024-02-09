#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double amount,;
    int dollars,quarters,dimes,nickels,pennies,fraction;
    //amount=11.56;
    cout<<"enter amount = ";
    cin>>amount;
    dollars= (int)amount;
    fraction=round((amount-dollars)*100);
    quarters=fraction/25;
    dimes=(fraction-quarters*25)/10;
    nickels=(fraction-quarters*25-dimes*10)/5;
    pennies=(fraction-quarters*25-dimes*10-nickels*5);
    cout<<"dollars = " <<dollars<<'\n';
    cout<<"quarters ="<<quarters<<'\n';
    cout<<"dimes ="<<dimes<<'\n';
    cout<<"nickels ="<<nickels<<'\n';
    cout<<"pennies="<<pennies<<'\n';
    
    
}