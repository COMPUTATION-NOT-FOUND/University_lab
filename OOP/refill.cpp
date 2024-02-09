#include <iostream>
using namespace std;


class glass{
    public:
    int liquidlevel=200;

    void drink(int p){
if(p>liquidlevel){
    cout<<"error setting liquid level to 0"<<endl;
    liquidlevel=0;
    refill();
}
else if(p<0){
    cout<<"error liquid level remains unchanged";

}
else{
    liquidlevel-=p;
    cout<<"new liquid level is :"<<liquidlevel<<endl;
    refill();


}
    }
void refill(){
    if(liquidlevel<=100){
        cout<<"refilling glass"<<endl;
        liquidlevel=200;
    }
    return;

}
    };

int main(){
    glass a;
    a.drink(90);
    a.drink(90);
    a.drink(200);
    a.drink(100);
    a.drink(300);
    a.drink(-100);

}