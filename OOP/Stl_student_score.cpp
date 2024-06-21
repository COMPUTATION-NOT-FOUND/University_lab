#include <map>
#include <iostream>

using namespace std;

int main(){
    int n;
    string line;
    map<string,int> mymap;
cout<<"enter number of records:";
cin>>n;
cin.ignore();

for(int i=0 ; i<n;i++){
    cout<<"enter name followed my score:";
getline(cin,line);
mymap[line.substr(0,line.find(" "))]=stoi(line.substr(line.find(" ")+1));

}

for(auto & it:mymap){
    cout<<it.first<<" "<<it.second<<endl;
}

}