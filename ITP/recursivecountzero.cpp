#include<iostream>
#include<iomanip>
using namespace std;

string arr[]={" zero "," one "," two "," three ", " four "
, " five " , " six " , " seven ", " eight " , " nine "};
string NumInWords(int n){
   if (n==0){
      return " ";
   }
   return NumInWords(n/10) + arr[n%10];

 }
 

unsigned long countzero(int n){
   
 if(n==0){
    return 0;
 }
 else if((n%10)==0)
    {return 1+(countzero(n/10));}
    else {
      return(countzero(n/10));
    }
 }  




int main() {
    long output,input;
    double output2;
    cout<<"countzero number :";
    cin>>input;
    cout<<"count of zero is :"<<countzero(input)<<endl;
    cout<<NumInWords(input);
    
}


