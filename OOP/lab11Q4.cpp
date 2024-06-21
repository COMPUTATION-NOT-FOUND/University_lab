#include<iostream>
#include<vector>
#include<ranges>
#include<vector>

using namespace std;
int main(){
    int x;
    vector<int> mysequence {} ;
    cout<<"enter numbers ctrl z or /0 to stop:";
    while(cin>>x){
        mysequence.push_back(x);
    }
    auto subseq= mysequence | views::reverse;
    
    bool flag;
    int counter=0;
    for(auto it:subseq){
        if(it==mysequence[counter]){
            flag=true;
        }
        else{
            flag=false;
        }
        counter++;
    }
    
    if(flag){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome"; 
    }
    
    
    
}