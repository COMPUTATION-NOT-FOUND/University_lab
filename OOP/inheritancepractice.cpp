#include <iostream>
using namespace std;

class father{

    public:

   virtual void greeting(){
    cout<<"good morning son"<<endl;
   }
};

class son: public father{

    public:

    void greeting(){
    cout<<"good morning father"<<endl;
   }
};


int main(){
    father a;
    son b;
    a.greeting();
    b.greeting();
}