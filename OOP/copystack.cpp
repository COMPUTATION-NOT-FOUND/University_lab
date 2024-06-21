#include <iostream>

using namespace std;

struct node{
    int c;
    node* link=NULL;
};


class shallowstack{
   node* top_pointer=NULL;

   public:
   
    shallowstack(){}

   shallowstack( const shallowstack& s){
   top_pointer=s.top_pointer;}
   

   void push(char c){
    node *temp =new node;
    temp->c=c;
    temp->link=top_pointer;
    top_pointer=temp;
    

   }

   void pop(){
    top_pointer=top_pointer->link;
   }

   void displaystack(){
    node* currentpointer =top_pointer;
    while(currentpointer!=NULL){
        cout<<currentpointer->c<<" ";
        currentpointer=currentpointer->link;

    }
    cout<<endl;
   }
 void top(){
    cout<<top_pointer<<endl;
 }

};

class deepstack{
   node* top_pointer=NULL;

   public:
   

   void push(char c){
    node *temp =new node;
    temp->c=c;
    temp->link=top_pointer;
    top_pointer=temp;
    

   }

   void pop(){
    top_pointer=top_pointer->link;
   }
    deepstack(){}

   deepstack(const deepstack& s){
    node* currentpointer=s.top_pointer;
    while(currentpointer!=NULL){
    currentpointer=currentpointer->link;
        push(0);

    }
    currentpointer=s.top_pointer;
    node *currentpointer2=top_pointer;
    while(currentpointer!=NULL){
        currentpointer2->c=currentpointer->c;
        currentpointer2=currentpointer2->link;
        currentpointer=currentpointer->link;

    }

      }


    void displaystack(){
    node* currentpointer =top_pointer;
    while(currentpointer!=NULL){
    cout<<currentpointer->c<<" ";
    currentpointer=currentpointer->link;

    }
    cout<<endl;
    }
    void top(){
    cout<<top_pointer<<endl;
 }
      
      };


int main(){
    deepstack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.displaystack();
    deepstack b(a);
    b.displaystack();
    a.top();
    b.top();
    a.pop();
    a.pop();
    a.displaystack();
    b.displaystack();
    

    shallowstack c;
    c.push(1);
    c.push(2);    
    c.push(3);
    shallowstack d(c);
    d.top();
    c.top();
    

}