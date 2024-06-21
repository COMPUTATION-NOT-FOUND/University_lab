#include <map>
#include <iostream>

using namespace std;

int main(){
    int n;
    string line;
    map<string,int> mymap;
cout<<"enter number of inputs:";
cin>>n;
cin.ignore();

for(int i=0 ; i<n;i++){
    cout<<"enter word :";
cin>>line;
mymap[line]++;

}

for(auto & it:mymap){
    cout<<it.first<<" "<<it.second<<endl;
}

}