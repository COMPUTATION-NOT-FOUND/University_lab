#include <iostream>
using namespace std;
struct node{
    int num;
    node* link=NULL;
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
            cin>>temp->num;
            startpointer=temp;
            endpointer=temp;
        }
        else{
            node* temp=new node;
            cout<<"enter value:";
            cin>>temp->num;
            endpointer->link=temp;
            endpointer=temp;
        }

    }
void dequeue(){
    node* currentpointer=startpointer;
    if(isempty()){cout<<"error queue empty";}
    else if (startpointer==endpointer){
        startpointer=NULL;
        endpointer=NULL;
    }
    else{
         while(currentpointer->link!=endpointer){
                currentpointer=currentpointer->link;
            }
            currentpointer->link=NULL;
            endpointer=currentpointer;
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
    {cout<<displaypointer->num<<" ";
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
    return startpointer->num;
}
int last(){
    return endpointer->num;
}
};
int main(){
    queue test;
    test.enqueue();
    test.enqueue();
    test.enqueue();
    test.displayqueue();
    cout<<test.start()<<" "<<test.end()<<endl;
    test.dequeue();
    test.displayqueue();
    cout<<test.start()<<" "<<test.end()<<endl;
    test.dequeue();
    cout<<test.start()<<" "<<test.end()<<endl;
    test.dequeue();
    cout<<test.start()<<" "<<test.end()<<endl;
    }
    