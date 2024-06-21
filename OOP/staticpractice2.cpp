#include <iostream>

using namespace std;
class objectcount{ 
    static int count;
public:
objectcount(){
    count++;
}

void displaycount(){

    cout<<"object count is :"<<count<< endl;
}

};

int objectcount::count = 0;

int main(){
    objectcount a;
    objectcount b;
    objectcount c;
    c.displaycount();
    a.displaycount();

}