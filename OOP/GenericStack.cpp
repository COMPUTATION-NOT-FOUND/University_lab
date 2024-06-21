#include <iostream>

using namespace std;

template<typename t>
struct node{
    t c;
    node* link=NULL;
};

template<typename t>
class stack{
   node<t>* top_pointer=NULL;

   public:

   void push(char c){
    node<t> *temp =new node<t>;
    temp->c=c;
    temp->link=top_pointer;
    top_pointer=temp;
    

   }

   void pop(){
    top_pointer=top_pointer->link;
   }

   t top(){
    return top_pointer->c;
   }

};

