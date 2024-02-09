#include <iostream>
using std::cin;
using std::cout;

int main(){
    int side,counter,n;
cout<<"enter side length : ";
cin>>side;
counter=0;
n=0;
while(n<side){
    while(counter<=n){
        cout<<"* " ;
        counter++;
    }
    cout<<"\n";
    counter=0;
    n++;
}
cout<<"ended";
}

