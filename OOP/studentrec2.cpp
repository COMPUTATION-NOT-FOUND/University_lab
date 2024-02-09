
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void studentrecord(){
    vector<double> marks;
    int index=0,index2=0;
    double runningsum=0,runningcount=0;
  

    string string1="",name="",mark="";
    cout<<"enter name followed by records seperated by space :";
    getline(cin, string1);
    
    while(isalpha(string1[index])||string1[index]==' '){
index++;
    }
   
    name=string1.substr(0,index);
    mark=string1.substr(index-1);
    index=0;
while((index=mark.find(" ",index))!=string::npos){
   index2=mark.find(" ",index+1);
    marks.push_back(stod (mark.substr(index+1,index2-index-1)) );
    index=index2;
    
}
    
    cout<<"student name :"<<name<<endl;
    cout<<"marks :";
    for(auto it=marks.begin();it<marks.end();it++){
        cout<<fixed<<setprecision(2)<<*it<<" ";
        runningsum+=*it;
        runningcount++;
    }  
cout<<endl<<"average :"<<fixed<<setprecision(2)<<runningsum/runningcount;

}

int main(){
    studentrecord();
}