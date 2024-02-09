#include <cmath>
#include <iostream>
using std:: cin;
using std:: cout;

int main(){
    int input ,sum=0;
    cout<<"pattern input : ";
    cin>> input;

    for(int i=1;i<=input;i++){
        sum=0;
        for(int j=1;j<=i;j++)
        {
            sum+=j;
            if(i==j){
                cout<<j;
            }
            else cout << j << " + " ;
        }
        cout<<" = "<< sum;
        cout<<'\n';
    }




}
