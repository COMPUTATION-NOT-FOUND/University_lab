#include <string>
#include <iostream>
using namespace std;

string isfactor(int x , int y){
     int z;
    if(x>y){
        z=y;
        y=x;
        x=z; 
    }
    if(y%x==0){
        return "true";
    }
    else{ return "false";}

        }

using namespace std;
int main(){
    int x,y;
    cout<<"enter x y enter null to stop : ";
    while(cin>>x>>y){
        cout<<isfactor(x,y)<<endl;
         cout<<"enter x y enter null to stop : ";

    }

}