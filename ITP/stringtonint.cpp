#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int convert(string y){
    int flag=0,output=0,inserted=0;
    for(int i=0;i<y.size();i++){
        if(y[i]<'0' ||y[i]>'9'){
            flag=1;
        }
        if(flag==1){
            return 0;
        }
            output=(y[i]-48)+output*10;
            inserted++;
    }  
        return output;
}
int main(){
    string x;
    cout<<"enter number without spaces :";
    cin>>x;
    cout<<convert(x);

}