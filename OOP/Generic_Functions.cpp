#include <iostream>

using namespace std;

template<typename t>
t max(t a, t b, t c){
    return a>b && a>c?a:b>c?b:c;
}

template<typename t>
void Swap(t & a , t&b){
    t temp= a;
    a=b;
    b= temp;

}

template<typename t>
int frequency(t arr[],int size, t item){
    int count=0;
     for (size_t i = 0; i < size; i++)
     {
        arr[i]==item?count++:0;
     }
    return count; 
}

int main(){

    // cout<<max(1,2,3)<<endl;
        int x=1;
        int y=2;
        Swap(x,y);
         cout<<x<<" "<<y<<endl;
    // int arr[]={1,1,1,2,3,4,1,1,1};
    // char arr2[]={'c','b','a','a','a'};
    // cout<<frequency(arr,static_cast<int>(sizeof(arr)/sizeof(arr[0])),1)<<endl;
    // cout<<frequency(arr2,6,'a')<<endl;
    

}