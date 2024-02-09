// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
bool subsequence(string a , int length,string check,int check2){
 if(check2==0){
     return true;
 }
 if(length==0){
     return false;
 }
if (a[0]==check[0]){
        
        return subsequence(a.substr(1),length-1,check.substr(1),check2-1 );
    }
     return subsequence(a.substr(1),length-1,check,check2 );  
}


int main(){
string s,t;
cin>>s>>t;
cout<<subsequence(s,s.length(),t,t.length());
  return 0;
}