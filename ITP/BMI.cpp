#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
int main(){
    double bmi,weight,height;
    cout<<"input weight and height :";
    cin>>weight >> height;
    bmi=weight/pow(height,2);
    if (bmi<18.5)
    cout<<"underweight";
    else if (bmi <25.0) 
    cout<<"normal";
    else if (bmi <30.0)
    cout<<"overweight";
    else
    cout<<"obese";

}