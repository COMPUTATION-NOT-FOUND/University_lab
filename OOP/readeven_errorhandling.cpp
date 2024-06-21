#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;

class CurveBall : public domain_error {
public:
    CurveBall(string msg) : domain_error(msg) {}

};


class NotANumber: public domain_error {
    public:
    NotANumber(const string & msg):domain_error(msg){}

};
class NegativeNumber:public domain_error {
    public:
    NegativeNumber(const string & msg):domain_error(msg){}

};
class OddNumber: public domain_error{
    public:
    OddNumber(const string & msg):domain_error(msg){}
};



int ReadEvenNumber(){
    
    cout<<"enter x :";
    int x;
    cin>>x;
    if(rand()%100<25){
        throw CurveBall(" CurveBall ");
    }
    if(cin.fail()){
        cin.clear(); // Reset the failure state
        string line; // Read the erroneous input and discard it
        getline(std::cin, line);
        throw NotANumber((" Not a Number "+ line) );
    }

    if(x<0){
        throw NegativeNumber(" Negative Number "+ to_string(x));

    }

    if(x%2 !=0){
        throw OddNumber(" Odd Number "+ to_string(x));
    }
    return x;

}


int main(){
    try{
        ReadEvenNumber();
    }
    catch(exception &e){
        cout<<"exception caught:"<<e.what();

    }
}