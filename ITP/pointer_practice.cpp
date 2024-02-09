#include <iostream>

using namespace std;
void The_world_is_mine_array(int *arr,const int arrsize){
    for(int i=0;i<arrsize;i++){
        arr[i]=1;
        *(arr+i)=1+i;
    }
     for(int i=0;i<arrsize;i++){
        cout<<arr[i]<<"";
    }

cout<<endl;
}

void Parray(const int *arr,const int arrsize){

    for(int i=0;i<arrsize;i++){
        cout<<arr<<endl;
        cout<<arr[i]<<endl;
        cout<<arr<<endl;
        cout<<*(arr+i)<<endl;
        
    }
     

}

void Data( ){
    int const *ptr;
    int b=2,a=1;
    ptr=&a;
    cout<<*ptr<<" ";
    a++;
    cout<<*ptr<<" ";
   ;



}

void can_do_nothing_array(const int *arr,const int arrsize){

}
 int main(){
//int arr[10]{},arraysize=sizeof(arr)/sizeof(arr[0]),data=1;
//The_world_is_mine_array(arr,arraysize);
//Parray(arr,arraysize);
double* ptr, a=1;
cout<<sizeof(*ptr);



 }