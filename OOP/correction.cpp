#include <iostream>
#include <stdexcept>
using namespace std;
class customException:public exception {
public:
 int error() const throw(){
return 1;
}

};
class alsocustom: public exception{
public:
const char* what() const throw(){
return "yikes";
}
};
void function(int x){
if(x==1){
throw customException();
}
else if(x==2){
throw alsocustom();
}
else
cout<<"no exception";
}
int main(){
    for(int i=1;i<4;i++)
{try{
function(i);
}
catch(const customException& error){
cout<<error.error() << endl;
}
catch(const alsocustom& e){
cerr << e.what() <<endl;
}
}
}