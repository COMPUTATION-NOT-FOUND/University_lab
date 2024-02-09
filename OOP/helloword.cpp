#include <iostream>
#include <chrono>
using namespace std;

int main(){
auto start = chrono::steady_clock::now();
cout<<"Hello Wold";
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
    
}