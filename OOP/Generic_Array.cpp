#include <iostream>

using namespace std;

template<typename t>
void sort_arr(t arr[],int size){
   int min_index =0;
   int temp=0;
    for(int i=0 ;i<size-1 ;i++){
        min_index=i;
        for(int j=i+1 ;j<size;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}

template<typename t>
void reverse_arr(t arr[],int size){
int start=0;
int end=size-1;
t temp;
while(start<end){
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    end--;
    start++;
}


}






int main(){

    char arr[]={'a','b','c','d'};

    sort_arr(arr,4);
     for(const char& it :arr){
        cout<<it;
     }
     cout<<endl;
    reverse_arr(arr,4);
    for(const char& it :arr){
        cout<<it;
    }

}