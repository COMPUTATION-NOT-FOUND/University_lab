
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>
using namespace std;

class CurveBall : public std::exception {
private:
    string msg;
    

public:
static int i;
    CurveBall() : msg("curve ball") {}

    const char* what() {
        return msg.c_str();
    }
};

int CurveBall::i=0;


void random25(){
    int i= rand()%99+1;
    if(i<=25){
        throw CurveBall();
    }


}


int main(){
    srand(time(NULL));
   
    for(int i=0;i<1000;i++){
         try{
        random25();
    }
    catch(CurveBall & e){
    CurveBall::i+=1;
    }
    }
    
    cout<<CurveBall::i;
}