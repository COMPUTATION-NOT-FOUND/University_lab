#include <iostream>
#include <stdexcept>

using namespace std;

class safearray{
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


int main() {
safearray a(5);
a[0] = 1;
a[1] = 2;
a[2] = 3;
a[3] = 4;
a[4] = 5;
a.print();
cout << "Size: " << a.Size() << endl;
safearray b = a;
b.print();
cout << "Size: " << b.Size() << endl;
b[0] = 10;
b.print();
cout << "Size: " << b.Size() << endl;
try {
b[5] = 10;
}
catch (std::out_of_range& e) {
cout << "Caught an exception of type: " << e.what() << endl;
}
} 