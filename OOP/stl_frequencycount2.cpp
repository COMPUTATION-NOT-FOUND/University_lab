#include <unordered_map>
#include <map>
#include <iostream>

using namespace std;

int main(){
    int n;
    int input;
    unordered_map<int,int> mymap;
cout<<"enter number of inputs:";
cin>>n;
cin.ignore();

for(int i=0 ; i<n;i++){
    cout<<"enter number :";
cin>>input;
mymap[input]++;

}
map<int,int> sortedmap(mymap.begin(),mymap.end());

for(auto & it:sortedmap){
    cout<<it.first<<" "<<it.second<<endl;
}

}