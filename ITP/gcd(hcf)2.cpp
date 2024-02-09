
#include <iostream>
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
   

int main() {
    std::cout<<gcd(729,1701);
    return 0;
}