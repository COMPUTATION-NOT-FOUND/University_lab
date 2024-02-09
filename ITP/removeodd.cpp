#include <iostream>
 #include <cmath>
 using namespace std;
 int m1 (int x){
    int  newnum=0,added=0;
    while(x!=0){
        if ((x%10)%2==0 ){
            newnum=newnum+x%10*pow(10,added);
            x=x/10;
            added++;
          
        }
      
        else if ((x%10)%2!=0){
            x=x/10;
          
        }
     
        

    }

    return newnum;
 }
 int main(){
    int x=1;
    while(x!=0)
   { cout<<"input integer value for removal of odd(enter zero to end):";
    cin>>x;
    cout<<endl;
    x=m1(x);
    cout<<x;
    cout<<endl;}
 }