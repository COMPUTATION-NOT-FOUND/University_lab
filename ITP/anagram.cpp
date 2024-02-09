#include<iostream>
#include<iomanip>
#include <cctype>
#include <string>
using namespace std;


string anagram(string n,string m,int size1,int size2){
    int value=0,value2=0;
    for(int i=0;i<size1;i++){
        if(n[i] !=' ')
       { value+=tolower(n[i]);}
    }
    for(int i=0;i<size2;i++){
        if(m[i] !=' ')
       { value2+=tolower(m[i]);}
    }
if(value==value2){
    return" it is an anagram";
}
else{
    return "not an anagram";
}



   
}

int main() {
    string input,input2;
    int size,size2;
    cout<<"enter string :";
    getline(cin,input);
    cout<<"enter string :";
    getline(cin,input2);
    size=input.size();
    size2=input2.size();
    cout<<anagram(input,input2,size,size2);
    
}