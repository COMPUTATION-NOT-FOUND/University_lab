#include <iostream>

using namespace std;

int main(){
    int size,halfsize;
    cout<<"input size";
    cin>>size;
    int a[size]{};
    for(int i=0;i<size;i++){
        cout<<"input value";
        cin>>a[i];
    }
    size=size-1;
    halfsize=size/2;
    for(int i=0;i<halfsize;i++){
        
        a[i]=a[i]+a[size-i];
        a[size-i]=a[i]-a[size-i];
        a[i]=a[i]-a[size-i];
    }
    for(int i=0;i<=size;i++){
        cout<<a[i]<<"\t";
}
}