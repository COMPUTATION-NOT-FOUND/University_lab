#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class circle{
double radius=1;
double perimeter;
double area;

public:
circle(double r){
    radius=r;
    perimeter=r*2*M_PI;
    area=M_PI*r*r;
}
void getarea(){
    cout<<"area is:"<<area<<endl;

}
void getperimeter(){
    cout<<"perimeter"<<perimeter<<endl;
}
};

int main (){

circle e(3);
e.getarea();
e.getperimeter();
}