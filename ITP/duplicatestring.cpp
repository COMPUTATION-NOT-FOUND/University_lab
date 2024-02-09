#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void isrepeat(string x,char c){
    int count=0;
    for(int i=0;i<x.size();i++){
        if(x[i] == c){
            count++;
        }
    }
    cout<<x<<endl;
    cout<<"check :"<<c<<endl;
    cout<<"frequency :"<<count<<endl;  
    }


int main(){
    string x;
    char check;
    cout<<"enter word : ";
    getline(cin,x);
    cout<<endl;
    cout<<"enter letter to check : ";
    cin>>check;
    cout<<endl;
    isrepeat(x,check);
}