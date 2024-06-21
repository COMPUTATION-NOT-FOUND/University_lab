#include <iostream>

using namespace std;

template<typename t>
struct node{
    t data;
    node* link=NULL;
};


template<typename t>
class linklist{
    node<t>* startpointer= NULL;
    size_t item=0;
 
public:
void insertfront(){


        
        if(startpointer==NULL && item ==0){
            node<t>* temp=new node<t>;
            cout<<"enter value:";
            cin>>temp->data;
            startpointer=temp;
           item++;
        }
        else{
            node<t>* temp=new node<t>;
            cout<<"enter value:";
            cin>>temp->data;
            temp->link=startpointer;
            startpointer=temp;
            item++;
        }

    }




void insertafter(int n){
    node<t>* currentpointer=startpointer;

for(int i=0;i<n;i++){
    currentpointer=currentpointer->link;
}
    node<t>* temp=new node<t>;
            cout<<"enter value:";
            cin>>temp->data;
            temp->link=currentpointer->link;  
            currentpointer->link=temp;
            item++;

}

void insertend(){


if(startpointer==NULL && item ==0){
            node<t>* temp=new node<t>;
            cout<<"enter value:";
            cin>>temp->data;
            startpointer=temp;
           item++;
}
return;
node<t>* currentpointer=startpointer;
while(currentpointer->link!=NULL){
    currentpointer=currentpointer->link;
}
            node<t>* temp=new node<t>;
            cout<<"enter value:";
            cin>>temp->data;
            currentpointer->link=temp;
            item++;

}


void remove(int n){
 if (n < 0 || n >= item || startpointer == nullptr)
        return;

    node<t>* temp;
    if (n == 0) {
        temp = startpointer;
        startpointer = startpointer->link;
    } else {
        node<t>* currentpointer = startpointer;
        for (int i = 0; i < n - 1; i++) {
            currentpointer = currentpointer->link;
        }
        temp = currentpointer->link;
        currentpointer->link = temp->link;
    }
    delete temp;
    item--;

}

void display(){
  node<t>* currentpointer=startpointer;
  while(currentpointer!=NULL){
    cout<<currentpointer->data;
    currentpointer=currentpointer->link;
}
cout<<endl;
    

}
};

int main(){


    linklist<int> myList;
    myList.insertfront();
    myList.insertfront();
    myList.insertend();
    myList.insertafter(1);
    myList.display(); 
    myList.remove(1);
    myList.display();
}


