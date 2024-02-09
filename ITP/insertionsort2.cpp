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
for(int i =0;i<insize;i++){
       cout<<arr[i]<<" ";
    }
cout<<endl;
sort(begin(arr), begin(arr)+insize);
for(int i =0;i<insize;i++){
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
   
int last = insize-1;

while(last>=0 && arr[last]>insertion){
    arr[last+1]=arr[last];
    last--;
    
}
arr[last+1]=insertion;

for(int i =0;i<insize+1;i++){
       cout<<arr[i]<<" ";
    }

}