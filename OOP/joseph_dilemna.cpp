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
    void enqueue(int i){
        node* temp;
        
        if(startpointer==NULL and endpointer==NULL){
            node* temp=new node;
            temp->num=i;
            startpointer=temp;
            endpointer=temp;
        }
        else{
            node* temp=new node;
            temp->num=i;
            endpointer->link=temp;
            endpointer=temp;
        }

    }
int dequeue(){
    int temp;
    temp=startpointer->num;
    if(isempty()){cout<<"error queue empty";}
    else if (startpointer==endpointer){
        startpointer=NULL;
        endpointer=NULL;
    }
    else{
         startpointer=startpointer->link;
    }
return temp;
}
/*
int dequeueN(int n){
    int temp;
    node* currentpointer=startpointer;
    node* previouspointer=NULL;
    for(int i=0;i<n-1;i++){
        previouspointer=currentpointer;
        currentpointer=currentpointer->link;

    }
    temp=currentpointer->num;
    if(isempty()){cout<<"error queue empty";}
    else if (currentpointer->link==NULL && currentpointer==startpointer){
        startpointer=NULL;
        endpointer=NULL;
    }
    else{
         previouspointer->link=currentpointer->link;
    }
    return temp;

}*/
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
node* end(){
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
    int temp,temp2,temp3;
    queue people;
    cout<<"enter number of people:";
    cin>>temp;
    cout<<"enter policy :";
    cin>>temp2;


    for(int i=0;i<temp;i++){
        people.enqueue(i);
    }

   while(people.start()!=people.end()){
        for(int j=0;j<temp2-1;j++)
            {people.enqueue(people.dequeue());}
        cout<<people.dequeue()<<" ";
    };
            
    

    cout<<endl<<"safe position :"<<people.front();
}