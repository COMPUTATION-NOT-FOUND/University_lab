#include<iostream>
#include<iomanip>
using namespace std;


string removex(string n,int size){
    if(size==-1){
        return "";}
    if(n[size]=='x' ||n[size]=='X' ){
        return removex(n,size-1)+"";
 }
 return removex(n,size-1)+n[size];


}
 


int main() {
    string input;
    int size;
    cout<<"enter string :";
    cin>>input;
    size=input.size();
    cout<<removex(input,size);
    
}