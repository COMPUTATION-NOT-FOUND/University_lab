#include <iostream>

using namespace std;

template <typename t>
struct node{
    t num;
    node* link=NULL;
};

template <typename t>
class queue{
    node<t>* startpointer=NULL;
    node<t>* endpointer=NULL;   
public:
    void enqueue(){
        node<t>* temp;
        
        if(startpointer==NULL && endpointer==NULL){
            node<t>* temp=new node<t>;
            cout<<"enter value:";
            cin>>temp->num;
            startpointer=temp;
            endpointer=temp;
        }
        else{
            node<t>* temp=new node<t>;
            cout<<"enter value:";
            cin>>temp->num;
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
    node<t>*displaypointer=startpointer;
    while(displaypointer!=NULL)
    {cout<<displaypointer->num<<" ";
    displaypointer=displaypointer->link;
    }
    cout<<endl;
}
node<t>* start(){
return startpointer;
}
node<t>* end (){
    return endpointer;
}
t front(){
    return startpointer->num;
}
t last(){
    return endpointer->num;
}
};
int main(){
    queue<string> test;
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
    