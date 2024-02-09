#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void convert(string y){
    string j,k;
    int flag=0,flag2=0;
    for(int i=0;i<y.size();i++){
        if(y[i]>='0'&& y[i]<='9'){
            flag=1;
        }
        if(y[i]>='a'&& y[i]<='z'){
            flag2=1;
        }
        if(y[i]>='A'&& y[i]<='Z'){
            flag2=1;
        }
        j=j+y[i];
        if(y[i] == ' ' || y[i]=='.'){
            if(flag ==1 && flag2==1){
                k=k+" "+j;
                flag=0;
                flag2=0;
            }
            j="";

        }
}
cout<<k;
}
int main(){
    string x;
    cout<<"enter alpha numeric setences end sentence with (.):";
    getline(cin,x);
    convert(x);

}