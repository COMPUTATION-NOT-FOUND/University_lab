#include<iostream>
#include<vector>
#include <cmath>
#include <string>
using namespace std;

class integerset{
    vector <bool> set;

public:
integerset(){
    for(int i=0;i<101;i++){
        set.push_back(false);

    }
}

integerset(int arr[],int size){
    for(int i=0;i<size;i++){
        set.push_back(arr[i]);

    }

    for(int i=size;i<101;i++){
        set.push_back(false);

    }
}
void unionset(integerset a){
    for (size_t t=0;t<101;t++){
        if(a.set[t]==true){
            set[t]=true;
        }
    }

}


void intersectionset(integerset a){
    for (size_t t=0;t<101;t++){
        if(a.set[t]!=set[t]){
            set[t]=false;
        }
    }

}

bool iseqaulto (integerset a){
    for (size_t t=0;t<101;t++){
        if(a.set[t]!=set[t]){
          return false;
        }
    }
    return true;
}
 string tostring(){
    string temp="";
    for (int t=0;t<101;t++){
        if(set[t]==true){
           temp=temp+" "+ to_string(t);
        }
    }
    if(temp==""){
        temp="\"\"";
    }
    return temp;
 }


};

int main(){
    int arr[]={ false,true,true,false};
    int arr2[]={true,true};
    integerset a(arr,4);
    integerset b;
    integerset c(arr2,2);
    cout<<a.tostring()<<endl;
    cout<<c.tostring()<<endl;
    cout<<b.tostring()<<endl;
    cout<<a.iseqaulto(c)<<endl;
    b.unionset(a);
    cout<<b.tostring()<<endl;
    c.intersectionset(a);
    cout<<c.tostring()<<endl;


}