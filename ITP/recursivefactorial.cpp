#include<iostream>
#include<iomanip>
using namespace std;

unsigned long factorial(int n){
 if(n<1){
    return 1;
 }
 else{
    return n*factorial(n-1);
 }    
}

unsigned long fibonancci(int n){
 if(n==1||n==0){
    return n;
 }
 else{
    return fibonancci(n-2)+fibonancci(n-1);
 }    
}
double fractionsum (double n){
    if(n==1){
        return 1.0;
    }
    else{
        return 1.0/n+(fractionsum(n-1.0));
    }
}

int main() {
    long output,input;
    double output2;
    cout<<"enter number for fibonanci and factorial : ";
    cin>>input;
    output=factorial(input);
    cout<<"factorial :"<<output<<endl;
    output=fibonancci(input);
    cout<<"fibonancci :"<<output<<endl;
    output2=fractionsum(input);
    cout<<"fractionsum :"<<output2<<endl;
   
}


