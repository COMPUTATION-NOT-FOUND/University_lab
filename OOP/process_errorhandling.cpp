#include <iostream>
#include <vector>
using namespace std;


void process(int x){
    if(x==1){
        throw 1;
    }
    else if (x==2){
        throw "yikes";
    }
    else{
        cout<<"processing "<<x<<endl;
}
}



int main(){
    // try{
    //     process(1);}
    //     catch(int i){
    //         cout<<"exception "<<i<<" caught"<<endl;
    //     }
    //     try{
    //     process(2);}
    //     catch(const char* i){
    //         cout<<"exception "<<i<<" caught"<<endl;
    //     }
    vector<int> vec= {0,1,2,3,4};
    for(int it:vec){
        try{
        process(it);
        cout<<"okay \n";
        }
        catch(const char* i){
            cout<<"exception "<<i<<" caught"<<endl;
        }
        catch(int i){
            cout<<"exception "<<i<<" caught"<<endl;
        }

    }
    }


