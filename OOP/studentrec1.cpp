
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void studentrecord(){
    vector<double> marks;
    int runningsum=0,runningcount=0;
    double mark=0;

    string name;
    cout<<"enter name  :";
    getline(cin, name);
    cout<<"enter marks ctrl z to stop :";
    while(cin>>mark){
        runningcount++;
        runningsum+=mark;
        marks.push_back(mark);
        cout<<"enter marks ctrl z to stop :";
    }
    cout<<"student name :"<<name<<endl;
    cout<<"marks :";
    for(auto it=marks.begin();it<marks.end();it++){
        cout<<fixed<<setprecision(2)<<*it<<" ";
    }  
cout<<endl<<"average :"<<fixed<<setprecision(2)<<runningsum/runningcount;
    
}

int main(){
    studentrecord();
}