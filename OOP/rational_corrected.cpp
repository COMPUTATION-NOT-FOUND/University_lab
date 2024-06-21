#include<iostream>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

int gcd(int a ,int b){
    int c,d,temp;
    c=a>b?a:b;
    d=a>b?b:a;
    
    if (d == 0) {
        return c;
    }
    while (d!=0) {
        int temp = c;
        c = d;
        d = temp % d;
    }
    return c;
       
    }
   

class Rational {
private:
int num, den;
public:
// default constructor
Rational() : num {0}, den {1} { /* empty */ }
Rational(int n) : num {n}, den {1} { /* empty */ }
Rational(int n, int d) : num {n}, den {d} { /* empty */ }
// copy constructor
Rational(const Rational& r) : num {r.num}, den {r.den} { /* empty */ }







int getnum(){
    return num;
}

int getdem(){
    return den;
}

void setnum(int i){
    num=i;
}

void setden(int j){
    den=j;
}

string string_to_string(){
    return (to_string(num)+"/"+to_string(den));

}
void reduce(){
    int temp=gcd(num,den);
    den/=temp;
    num/=temp;

}

Rational operator+(Rational r){
    int n=num*r.den+r.num*den;
    int d=den*r.den;
    Rational t(n,d);
    t.reduce();
    return t;
}


Rational operator-(Rational r){
    int n=num*r.den-r.num*den;
    int d=den*r.den;
    Rational t(n,d);
    t.reduce();
    return t;
}

Rational operator*(Rational r){
    int n=num*r.num;
    int d=den*r.den;
    Rational t(n,d);
    t.reduce();
    return t;
}

Rational operator/(Rational r){
    int n=num*r.den;
    int d=den*r.num;
    Rational t(n,d);
    t.reduce();
    return t;
}

bool operator== (Rational r){
    if(num==r.num && den==r.den){
        return true;
    }
    return false;
}


bool operator != (Rational r){
    if(num==r.num && den==r.den){
        return false;
    }
    return true;
}

Rational(double d){
    
    den=1;
     while(d<=1){
        d*=10;
        den*=10;
     }
num=d; 
reduce();

}


Rational(string s){
    int temp;
    temp=s.find("/");
    num=stoi(s.substr(0,temp));
    den=stoi(s.substr(temp+1));
    reduce();

}

~Rational(){}


};

int main(){
    Rational f(2,8);
    Rational g(4,8);
    Rational h= f+g;
    cout<<h.string_to_string()<<endl;
    h= f*g;
    cout<<h.string_to_string()<<endl;
    h= f-g;
    cout<<h.string_to_string()<<endl;
    h= g/f;
    cout<<h.string_to_string()<<endl;
    Rational i("4/2");
    Rational j(0.6);
    cout<<j.string_to_string()<<endl;
    cout<<i.string_to_string()<<endl;


    }
    