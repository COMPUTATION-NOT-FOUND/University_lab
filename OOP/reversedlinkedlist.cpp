#include <iostream>
using namespace std;
struct node{
    int num=0;
    node* link=NULL;
    node* prevlink=NULL;

};

class linkedlist{
    node* startpointer= NULL;
    node* endpointer=NULL;
public:
void addnode(){
    node* temp=new node;
    cout<<"enter value:";
    cin>>temp->num;
    if(startpointer==NULL){
        startpointer=temp;
        endpointer=temp;
    }
    else{
        endpointer->link=temp;
        temp->prevlink=endpointer;
        endpointer=temp;
    }

}

node* start(){
    return startpointer;
}

void displaylist(){
    node* currentpointer=startpointer;
    while(currentpointer!=NULL){
        cout<<currentpointer->num<<" ";
        currentpointer=currentpointer->link;
    }
    cout<<endl;
}

void reverselist(node* s){
    
        node* temp;
    while(s!=NULL)
    {   temp=s->link;
        s->link=s->prevlink;
        s->prevlink=temp;
        s=temp;
        }
        
        temp=startpointer;
        startpointer=endpointer;
        endpointer=temp;
        
       
   

}};

int main(){

    linkedlist a;
    a.addnode();
    a.addnode();
    a.addnode();
    a.addnode();
    a.displaylist();
    a.reverselist(a.start());
    a.displaylist();


}