#include <cmath>
#include <iostream>
using namespace std;

void isdudeney(){
    int count=0,num=0,x=0,sum=0;
      while(count!=7){
        //cout<<num<<endl;
        x=num;
        while(x!=0){
            sum=sum+(x%10);
            x=x/10;
            

        }
        if(cbrt(num)==sum){
            cout<<num<<" is a dudeney number"<<endl;
            count++;
        }
        num++;
        sum=0;
    }

    
}
int main(){
    isdudeney();
}