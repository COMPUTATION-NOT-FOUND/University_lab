#include <map>
#include <unordered_map>
#include <iostream>

using namespace std;

int main(){
    int n,n2,score,totalscore=0;
    string name;
    string subject;
    map<string,map<string,int>> mymap;
    unordered_map<string,map<string,int>> mymap2;
cout<<"enter number of records: ";
cin>>n;

for(int i=0 ; i<n;i++){
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter number of subject: ";
    cin>>n2;
    for(int j=0;j <n2;j++){
        cout<<"enter subject: ";
        cin>>subject;
        cout<<"enter score :";
        cin>>score;
        mymap[name][subject]=score;
        mymap2[name][subject]=score;

    }

}

for(auto & it:mymap){
    cout<<it.first;
    for(auto & it2:it.second){
        totalscore+=it2.second;

    }
    cout<<" "<<totalscore<<endl;
    totalscore=0;
}

cout<<"unordered map"<<endl;

for(auto & it:mymap2){
    cout<<it.first;
    for(auto & it2:it.second){
        totalscore+=it2.second;

    }
    cout<<" "<<totalscore<<endl;
    totalscore=0;
}

}