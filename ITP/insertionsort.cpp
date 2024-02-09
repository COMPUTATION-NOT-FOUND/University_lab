#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;


int main (){
    int insize,arr[20]{};
    cout<<"input number of entries to be made <20 : ";
    cin>>insize;
    while(insize>19){
        cout<<"error! input number of entries to be made <20 :";
        cin>>insize;
    }


srand(static_cast<unsigned int>(time(0)));

    for(int i =0;i<insize;i++){
        arr[i]=rand()%99+1;
    }
for(int i =0;i<20;i++){
       cout<<arr[i]<<" ";
    }
cout<<endl;
sort(begin(arr), end(arr));
for(int i =0;i<20;i++){
       cout<<arr[i]<<" ";
    }
cout<<endl;
 int insertion,comp_ptr,flag;
    cout<<"input number to be inserted <100 :";
    cin>>insertion;
    while(insertion>99){
       cout<<"error! input number to be inserted <100 :";
    cin>>insertion;
    }
   
for(int i=1; i<20;i++){
    comp_ptr=i;
    flag=0;
    while( insertion>arr[comp_ptr] && arr[comp_ptr]!=0 && comp_ptr<20){
        arr[comp_ptr-1]= arr[comp_ptr];
        comp_ptr+=1;
        flag=1;
    }
    if(flag==1){ 
        arr[comp_ptr-1]= insertion;
        break;
       
    }
}
    if(flag==0){
        comp_ptr=0;
        while( insertion>arr[comp_ptr]   ){
            comp_ptr+=1;
        }
         arr[comp_ptr-1]= insertion;

    }



for(int i =0;i<20;i++){
       cout<<arr[i]<<" ";
    }

}