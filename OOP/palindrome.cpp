#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class stackqueue {
   stack <char>a;
   queue <char>b;
public:
void pushchar (char x){
   a.push(x);
}

void popchar(){
   a.pop();
}

void enqueuechar(char x){
   b.push(x);
}

void dequeuechar (){
   b.pop();
}


char STop(){
   return a.top();
}
char QTop(){
   return b.front() ;
}

bool Sempty(){
   return a.empty();
}

bool Qempty(){
   return b.empty();
}

};


int main(){

   stackqueue validate;
   string s;
   bool flag=true;
   cout<<"enter string :";
   cin>>s;
  for(char x: s){
   validate.pushchar(x);
   validate.enqueuechar(x);
  }
   while(!validate.Qempty() && ! validate.Sempty()){
      if(validate.QTop()!= validate.STop()){
         flag=false;
      }
      validate.dequeuechar();
      validate.popchar();
   }

if(flag){
   cout<<s<<" is a plaindrome";
}
else{
    cout<<s<<" is not a plaindrome";
}

}