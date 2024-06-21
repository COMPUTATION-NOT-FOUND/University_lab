
#include <iostream>


class Base {
public:
    virtual void abstractFunction() {
        std::cout << "Abstract function in Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void abstractFunction() {
        std::cout << "Abstract function in Derived class" << std::endl;
    }
};
class Derived2 : public Base {
public:
    void abstractFunction() {
        std::cout << "Abstract function in Derived2 class" << std::endl;
    }
};

int main()
{
    Base a;
    Derived b;
    Derived2 c;
    a.abstractFunction();
    b.abstractFunction();
    c.abstractFunction();
    Base array[2];
    array[0]= Base();
    array[1]= Derived();
    a.abstractFunction();
    b.abstractFunction();
    Base* ptr= &b;
    Base* ptr2= &a;
    std::cout<<ptr<<std::endl;
    std::cout<<ptr2<<std::endl;
    Derived* ptr3 = dynamic_cast <Derived*> (ptr2);
    Derived2* ptr4= static_cast <Derived2*> (ptr);
    std::cout<<ptr4<<std::endl;
    std::cout<<ptr3<<std::endl;
    ptr4= dynamic_cast <Derived2*> (ptr2);
    std::cout<<ptr4;
}
