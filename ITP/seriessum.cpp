#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,n;
    int factorial=1;
    double sum=0;
    cout<<"enter x,n :";
    cin>>x>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            factorial=factorial*j;}
            sum=sum+pow(x,i)/factorial;
            factorial=1;

    }
    cout<<"sum of series is"<<sum;
    
}
