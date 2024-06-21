#include <iostream>
#include <stdexcept>

using namespace std;

class safearray{
protected:
int* arr;
int size;

public:


safearray(int i){
    arr= new int [i]{};
    size=i;
}
safearray(const safearray& other){
size=other.size;
arr= new int [other.size]{};

for(int i =0 ;i<size;i++)  {
    arr[i]=other.arr[i];
}


}
~safearray(){}

int& operator[](int index){
index>=size?throw overflow_error("Index out of range"): 0;
return arr[index];
}

int Size(){
    return size;
}

void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
}

};

class safevector:public safearray{
public:



safevector(int i):  safearray(i){}

void push_back(int val){
    size+=1;
    int* newarr=new int [size];
    for (int i = 0; i < size-1; i++)
    {
        newarr[i]=arr[i];
    }
    newarr[size-1]=val;
    delete []arr;
    arr=newarr;
   
    

}

int back(){
    return arr[size-1];
}


void pop_back(){
     size-=1;
     0>size?throw underflow_error("vector is empty"): 0;
    int* newarr=new int [size];
    for (int i = 0; i < size; i++)
    {
        newarr[i]=arr[i];
    }
    
    delete []arr;
    arr=newarr;
   
}

};


int main() {
    safevector vec(2);
    vec[0]=1;
    vec[1]=2;
    vec.push_back(3);
    cout<<vec.back()<<endl;
    vec.pop_back();
    cout<<vec.back()<<endl;



} 

