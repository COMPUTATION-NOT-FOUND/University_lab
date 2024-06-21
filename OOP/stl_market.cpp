#include <unordered_map>
#include <map>
#include <iostream>

using namespace std;




int main(){
    int n;
    double price;
    string input;
    unordered_map<string,double> mymap;
    map<string,double> mymap2;
cout<<"enter number of inputs:";
cin>>n;


for(int i=0 ; i<n;i++){
cout<<"enter item code number :";
cin>>input;
cout<<"enter item price:";
cin>>price;
mymap[input]= price;
mymap2[input]= price;
}

cout<<"ordered map"<<endl;
for(auto & it:mymap2){
    cout<<it.first<<" "<<it.second<<endl;
}
cout<<"unordered map"<<endl;
for(auto & it:mymap){
    cout<<it.first<<" "<<it.second<<endl;
}

cout<<"enter item code for price update:";
cin>> input;
cout<<"enter updated item price:";
cin>>price;
mymap[input]= price;
mymap2[input]= price;

cout<<"ordered map"<<endl;
for(auto & it:mymap2){
    cout<<it.first<<" "<<it.second<<endl;
}
cout<<"unordered map"<<endl;
for(auto & it:mymap){
    cout<<it.first<<" "<<it.second<<endl;
}

}