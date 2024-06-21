#include <iostream>
template<typename t>
class cal {
public:

t sum(t a ,t b){
    return a+b;
}


t sub(t a , t b){
     return a-b;
}

};

using namespace std;

int main(){
     cal<char> obj;
     std::cout<<obj.sum('b',1);




}