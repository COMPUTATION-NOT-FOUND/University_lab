#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

class polynomial{
    int a;
    int b;
    int c;
    public:
    string format(){
        return to_string(a)+"x^2 + "+to_string(b)+"x + "+to_string(c);
        
    }
    float eval(float x){
    return a*x*x+b*x+c;
    }
    
polynomial operator+(polynomial& p){
    return  polynomial(a+p.a,b+p.b,c+p.c);
}    
int& operator[](int index){
    if (index==0){
        return a;
    }
    else if (index==1){
        return b;
    }
    else if (index==2){
        return c;
    }
    else{
        exit(1);
    }
    
}

bool operator ==(polynomial p){
    if(a==p.a&&b==p.b&&c==p.c){
return true;
    }
    return false;
}
    
    polynomial(int d=1,int e=1 ,int f=1){
        a=d;
        b=e;
        c=f; 
    }
};




int main(){
    polynomial p1(1,1,1);
    polynomial p2(1,1,1);
    polynomial p3= p1+p2;
    cout<<p2.format()<<endl;
    cout<<p3.format()<<endl;
    cout<<p3[1]<<endl;
    p3[1]=6;
    cout<<p3[1]<<endl;
    cout<<(p1==p2);
  

}