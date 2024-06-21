#include <iostream>
#include<cmath>


class cal {

    public:
     virtual int  perform (int,int);
    

};


class sum:public cal{

    public:
    int perform ( int a, int b){
        return a+b;
    }

};

class sub:public cal {

public:
int peform(int a, int b){
    return a-b;
}
};



int main(){
    cal* ptr;
    sum obj;
    ptr=&obj;
    std::cout<<ptr->perform(3,-1);
}