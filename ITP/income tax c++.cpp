#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
int main(){
    int status;
    double income,tax,takeaway_income;
cout<<"status  (0 means singles , 1 married filing jointly / widower ,2 married filing seperately  ,3 head of household) : " ;
cin>>status;
cout<<"income per year in 0.0 format : ";
cin>>income;
if(status==0){
    if(income<=8350)
    tax=income*0.1;
    else if(income<=33950)
    tax=(income-8350)*0.15+8350*0.1;
    else if(income<=82250)
    tax=(income-8350-33950)*0.25+8350*0.1+33950*0.15;
    else if(income<=171550)
    tax=(income-8350-33850-82250)*0.28+8350*0.1+33950*0.15+82250*0.25;
    else if(income<=372950)
    tax=(income-8350-33850-82250-171550)*0.33+8350*0.1+33850*0.15+82250*0.25+171550*0.28;
    else
    tax=(income-8350-33850-82250-171550-372950)*0.35+8350*0.1+33850*0.15+82250*0.25+171550*0.28+372950*0.33;
}
if(status==1){
    if(income<=16700)
    tax=income*0.1;
    else if(income<=67900)
    tax=(income-16700)*0.15+16700*0.1;
    else if(income<=137050)
    tax=(income-16700-67900)*0.25+16700*0.1+67900*0.15;
    else if(income<=208850)
    tax=(income-16700-67900-137050)*0.28+16700*0.1+67900*0.15+137050*0.25;
    else if(income<=372950)
    tax=(income-16700-67900-137050-208850)*0.33+16700*0.1+67900*0.15+137050*0.25+208850*0.28;
    else
    tax=(income-16700-67900-137050-208850-372950)*0.35+16700*0.1+67900*0.15+137050*0.25+208850*0.28+372950*0.33;
}
  if(status==2){
    if(income<=8350)
    tax=income*0.1;
    else if(income<=33950)
    tax=(income-8350)*0.15+8350*0.1;
    else if(income<=68525)
    tax=(income-8350-33950)*0.25+8350*0.1+33950*0.15;
    else if(income<=104425)
    tax=(income-8350-33950-68525)*0.28+8350*0.1+33950*0.15+68525*0.25;
    else if(income<=186475)
    tax=(income-8350-33950-68525-104425)*0.33+8350*0.1+33950*0.15+68525*0.25+104425*0.28;
    else
    tax=(income-8350-33950-68525-104425-186475)*0.35+8350*0.1+33950*0.15+68525*0.25+104425*0.28+186475*0.33;
}  
    
if(status==3){
    if(income<=11950)
    tax=income*0.1;
    else if(income<=45500)
    tax=(income-11950)*0.15+11950*0.1;
    else if(income<=117450)
    tax=(income-11950-45500)*0.25+11950*0.1+45500*0.15;
    else if(income<=190200)
    tax=(income-11950-45500-117450)*0.28+11950*0.1+45500*0.15+117450*0.25;
    else if(income<=372950)
    tax=(income-11950-45500-117450-190200)*0.33+11950*0.1+45500*0.15+117450*0.25+190200*0.28;
    else
    tax=(income-11950-45500-117450-190200-372950)*0.35+11950*0.1+45500*0.15+117450*0.25+190200*0.28+372950*0.33;
}  
takeaway_income=income-tax;
cout<<"takeaway income" <<takeaway_income<<"\n";
cout<<"tax"<<tax <<"\n";
    



}