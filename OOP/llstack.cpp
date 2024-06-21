#include <iostream>

using namespace std;

struct node{
    char c;
    node* link=NULL;
};

class stack{
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

};

class queue{
    node* startpointer=NULL;
    node* endpointer=NULL;   
public:
    void enqueue(){
        node* temp;
        
        if(startpointer==NULL and endpointer==NULL){
            node* temp=new node;
            cout<<"enter value:";
            cin>>temp->c;
            startpointer=temp;
            endpointer=temp;
        }
        else{
            node* temp=new node;
            cout<<"enter value:";
            cin>>temp->c;
            endpointer->link=temp;
            endpointer=temp;
        }

    }
void dequeue(){
    if(isempty()){cout<<"error queue empty";}
    else if (startpointer==endpointer){
        startpointer=NULL;
        endpointer=NULL;
    }
    else{
         startpointer=startpointer->link;
            
    }
}
bool isempty(){
    if(startpointer==NULL){
        return true;
    }
    else{
        return false;
    }
}
void displayqueue(){
    node*displaypointer=startpointer;
    while(displaypointer!=NULL)
    {cout<<displaypointer->c<<" ";
    displaypointer=displaypointer->link;
    }
    cout<<endl;
}
node* start(){
return startpointer;
}
node* end (){
    return endpointer;
}
int front(){
    return startpointer->c;
}
int last(){
    return endpointer->c;
}
};