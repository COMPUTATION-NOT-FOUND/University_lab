
#include <iostream>
#include <exception>
using namespace std;

class MyException : public std::exception {
private:
    std::string msg;

public:
    MyException() : msg("My Exception") {}

    const char* what() {
        return msg.c_str();
    }
};

class Dummy {

public:

string MyName;
int level;

void PrintMsg(string s) {
cout << s << MyName << endl;
}

Dummy(string s) : MyName(s) {
PrintMsg("Created Dummy:");
}

Dummy(const Dummy& other) : MyName(other.MyName) {
PrintMsg("Copy created Dummy:");
}

~Dummy() {
PrintMsg("Destroyed Dummy:");
}
};

void C(Dummy d, int i) {
cout << "Entering FunctionC" << endl;
d.MyName = "C";
throw MyException();
cout << "Exiting FunctionC" << endl;
}

void B(Dummy d, int i) {
cout << "Entering FunctionB" << endl;
d.MyName = "B";
C(d, i + 1);
cout << "Exiting FunctionB" << endl;
}

void A(Dummy d, int i) {
cout << "Entering FunctionA" << endl;
d.MyName = " A" ;
Dummy* pd = new Dummy("new Dummy"); //Not exception safe!!!
B(d, i + 1);
delete pd;
cout << "Exiting FunctionA" << endl;
}

int main() {
cout << "Entering main" << endl;
try {
Dummy d(" M");
A(d,1);
}

catch (MyException& e) {
cout << "Caught an exception of type: " << e.what() << endl;
}
cout << "Exiting main." << endl;
char c;
cin >> c;
}

// The output of the program is:
// Entering main
// Created Dummy: M
// Copy created Dummy: M
// Entering FunctionA
// Copy created Dummy: A
// Entering FunctionB
// Copy created Dummy: B
// Entering FunctionC
// Destroyed Dummy: C
// Destroyed Dummy: B
// Destroyed Dummy: A
// Destroyed Dummy: M
// Caught an exception of type: class MyException
// Exiting main.

// (a) What is the order in which the Dummy objects are created and then destroyed as they go out of
// scope.?
// ans dummies created as M , A, B, C then destroyed in reverse order C,B,A,M.


// (b) Which functions completed their execution in the above program?
// ans no function completes there execution as the function ends abruptly.


// (c) Uncomment the definition of the Dummy pointer and the corresponding delete statement, and then
// run the program, will the pointer gets deleted?
// ans no as control will not be returned to function A and exception will not allow it to fulling execute;




// (d) What happens if you remove the throw statement from the C function?
// ans comenting out the throw statement will allow controll to be returned to each function thus they 
// will complete and pointer will be deleted