#include<iostream>
#include<iomanip>
using namespace std;
double fractionsum (double n){
    if(n==0){
        return 0.0;
    }
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
    cout<<"enter number for fraction sum: ";
    cin>>input;
    output2=fractionsum(input);
    cout<<"fractionsum :"<<output2<<endl;
   
}