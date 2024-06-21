#include<iostream>
 #include<array>
 #include<iterator>
 #include<algorithm>
 #include<cstring>
 

 using namespace std;
 
 bool ismatch(array<int,10> a ,array<int,10> b){
     return equal(a.begin(),a.end(),b.begin(),b.end());
     
 }
 
 void print(array<int,10> a){
     copy(a.begin(),a.end(),ostream_iterator<int>(cout," "));
     cout<<endl;
     
 }
 
 void ismismatch(array<int,10> a ,array<int,10> b){
     auto m=mismatch(a.begin(),a.end(),b.begin(),b.end());
     cout<<"index"<<(m.first-a.begin())<<endl;
     cout<<"mismatches "<<*m.first<<" "<<*m.second<<endl;
     
     
 }
 
void is_lexi_eqvi( char a[], char b[]){
     
 if(std::lexicographical_compare(a, a + strlen(a), b,b + strlen(b))){
     cout<< a <<" and "<< b <<"are eqivalent";
 }
 cout<< a <<" and "<< b <<" are not eqivalent";
 }
 
 
 int main(){
     array<int,10>a={1,2,3,4,5,6,7,8,9,10};
     array<int,10>b={1,2,3,4,5,6,7,8,9,10};
     array<int,10>c={1,2,3,4,5,6,7,8,9,100};
     print(a);
     print(b);
     cout<<ismatch(a,b)<<endl;
     ismismatch(a,c);
     char c1[]="jhon doe";
     char c2[]="jane doe";
     
     is_lexi_eqvi(c1,c2);
     
 }
 