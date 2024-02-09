#include<iostream>
using namespace std;
struct fraction {
int num;
int denom;
};

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
   
ostream& operator<<(ostream& os, const fraction& f) { os << f.num << "/" << f.denom;
return os;
}

fraction operator+(const fraction& f1, const fraction& f2){
    return{(f1.num*f2.denom + f2.num*f1.denom), (f1.denom*f2.denom)};

}
 void operator+=(fraction& f1, const fraction& f2){
   f1={f1.num*f2.denom + f2.num*f1.denom, f1.denom*f2.denom};
 }

fraction operator*(const fraction& f1, const fraction& f2)
{
    return{f1.num*f2.num,f1.denom*f2.denom};

}
void operator*=(fraction& f1, const fraction& f2){
     f1={f1.num*f2.num,f1.denom*f2.denom};
}
bool operator==(const fraction& f1, const fraction& f2){
    //if(f1.num/f1.denom==f2.num/f2.denom ){
        if(f1.num*f2.denom==f2.num*f1.denom ){
        return true;
    }
    return false;
}


    int main() {
fraction f1 {1, 2};
cout << f1 << endl; // prints 1/2

fraction f2 {3, 4}; f2 += f1;
cout<< f2 << endl; // should prints 5/4

fraction f3 = f1 * f2;
cout << f3 << endl; // should prints 5/8

fraction f4 {1, 3}; f3 *= (f1 * f2);
cout << f3 << endl; // should prints 25/64

fraction f5 {2, 4}; // same as f1
if (f1 == f5)
cout << "f1 and f5 are equal" << endl;
else
 cout << "f1 and f5 are not equal" << endl;
// the above should print "f1 and f5 are equal"



}
