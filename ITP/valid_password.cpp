#include<iostream>
#include<iomanip>
#include <cctype>
using namespace std;


string isvalid(string n,int size){
    int sflag=1,intflag=0,alphanum=1,alphabet=0;
    if(size>10){
        return"length too long";
    }

    for(int i=0;i<size;i++){
        if(isalpha(n[i])){
            alphabet++;
        }
        if(isdigit(n[i])){
            intflag++;
        }
         if(!isalnum(n[i])){
           alphanum=0;
        }


    }
  if( intflag>=2 && alphanum==1 && alphabet >=1 ){
    return "valid";
  }
else{
    return "Notvalid";
}
}
 


int main() {
    string input;
    int size;
    cout<<"enter string :";
    cin>>input;
    size=input.size();
    cout<<isvalid(input,size);
    
}