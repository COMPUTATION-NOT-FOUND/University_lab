#include <iostream>
using std::cin;
using std::cout;

int main(){
    int side,counter,n;
cout<<"enter side length : ";
cin>>side;
for(int count=1;count<=side;count++){
    for(int count2=1;count2<=side-count;count2++){
        cout<<" ";
    }
    for(int count3=1;count3<=count;count3++){
        cout<<count3;
    }
    for(int count4=count-1;count4>=1;count4--){
        cout<< count4;
    }
    cout<<'\n';

}
}