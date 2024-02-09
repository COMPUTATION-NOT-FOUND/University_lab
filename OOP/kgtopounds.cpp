#include <iostream>
#include <iomanip>
using namespace std;

void weightinpounds(){
    int weight;
    cout<<"enter weight in kilograms :";
    cin>>weight;
    cout<<fixed<<setprecision(2)<<"weight in pounds :"<<weight*2.2<<endl;  
}


int main(){
    weightinpounds();
   
}