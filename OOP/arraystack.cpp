#include <iostream>

using namespace std;

class Arraystack{

public:
int capacity=0;
int size=0;
int* array=new int [capacity];



bool isempty(){
    if(capacity==0){
        return true;
    }
    return false;
}

void push(int in){
    if(isempty()||size==capacity){
        resize();
    }

    array[size]=in;
    size++;

}

void pop(){
    /* not needed */
}

void resize(){
    int* newarr;
    capacity+=1;
    newarr=new int[capacity];
    for(int i=0;i<size;i++){
        newarr[i]=array[i];
    }
delete[]array;
array=newarr;

}

int peek(int no){

return array[no-1];

}



};


class Sortedstack : public Arraystack{

public:
 void push2(int in){
    push(in);
if(size==1){
    return;
}
    int key;
    int j;
for(int i=1;i<size;i++){
key=array[i];
j=i-1;

while(j>=0 && key < array[j])
    {array[j+1]=array[j];
    j--;
}
array[j+1]=key;

}

 }

void display(){
    cout<<"{";
    for(int i=0; i<size;i++){
        cout<<array[i]<<",";

    }
    cout <<"}"<<endl;
}



};

int main(){
    Sortedstack a;
    int temp=0;

    while(cin>>temp){
        a.push2(temp);
        a.display();
    }

    a.display();
    }
