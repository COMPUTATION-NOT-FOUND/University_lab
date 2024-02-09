#include<iostream>
#include<cmath>
#include <iomanip>
using std::cin;
using std::cout;
using namespace std;
int main(){ 
    const double phi=1.618033989;
    double temp;
    int input,input2,number ;
    cout<<"enter fibonnaci number  position geater than 3 : ";
    cin>> input;
    input2=input-1;
    input-=3; 
    number=1;
    cout<<"\niteration fibonnaci completed \n";
    cout<<"0"<<setw(10)<<"1"<<setw(10)<<"1"<<setw(10);
    for(int counter=1;counter<=input;counter++){
        temp=number*phi;
        number=round(temp);
        cout<<number<< setw(10);
    }
    cout<<"\ndirect computation \n";
    number=(pow(phi,input2)-pow(1-phi,input2))/sqrt(5);
    cout<<number;

/*
for(int counter=1;counter<=input2; counter++){
    number=(pow(phi,counter)-pow(1-phi,counter))/sqrt(5);
    cout<<number<<setw(10);

}*/
} 
