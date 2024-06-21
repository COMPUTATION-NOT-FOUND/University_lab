#include <iostream>


void functioncall(){
    static int calltime=0;

    calltime++;
    std::cout<<"this function has been called this many times:"<<calltime<<std::endl;

}

int main(){
functioncall();
functioncall();
functioncall();
}