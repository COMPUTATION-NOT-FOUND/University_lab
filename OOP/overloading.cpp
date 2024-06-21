#include <iostream>

using namespace std;
class cal{

    int sum(int a,int b){
        return a+b;

    }

    double sum(double a, double b){
        return a+b;

    }
     int sum  (int a, int b,int c){
        return a+b+c;

     }




};

template< typename A ,typename B>

int main(){
    A a;
    B b;
    cin>>a;
    cin>>b;

    cal c;
    c.sum(a,b);
}