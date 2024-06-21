#include<iostream>
  #include<array>
  #include<iterator>
  #include<vector>
  #include<algorithm>
  #include<cstring>
 

 using namespace std;
 
 
 void print(int* arr ,int size){
     for(int i=0;i<size;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
 }
     
 
 
int* remove10 (int arr[],int size){
    vector<int> temp;
    
    copy_if(arr,arr+size,back_inserter(temp),[](int num){return num!=10;});
    
    int* result=new int[temp.size()];
    
    copy(temp.begin(), temp.end(), result);
    
     cout<<"array after removing equal to 10 :";
    
    print(result,temp.size());
    
     return result;
 }
 
int* replace10(int arr[],int size){
    
    vector<int> temp;
    
    copy(arr, arr+size,back_inserter(temp));
    
    replace(temp.begin(),temp.end(),10,0);
    
    int* result=new int[temp.size()];
    
    copy(temp.begin(), temp.end(), result);
    
    cout<<"array after repalce equal to 10 :";
    
    print(result,temp.size());
     return result;
     
  }

  int * removegreater10(int arr[],int size){
     vector<int> temp;
    
    copy_if(arr,arr+size,back_inserter(temp),[](int num){return num<10;});
    
    int* result=new int[temp.size()];
    
    
    copy(temp.begin(), temp.end(), result);
    
    cout<<"array after removing greater than 10 :";
    
    print(result,temp.size());
    
     return result;
  }
 
  int* replacegreater10(int arr[],int size){
      vector<int> temp;
    
    copy(arr, arr+size,back_inserter(temp));
    
    transform(temp.begin(),temp.end(),temp.begin(),[](int num){ return (num<10)?num:0; });
    
    int* result=new int[temp.size()];
    
    copy(temp.begin(), temp.end(), result);
    
    cout<<"array after replacing greater than 10 :";
    
    print(result,temp.size());
    
     return result;
     
  }
 
 
 
 int main(){
    int arr[]= {10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
    cout<<"array before any reduction";
    print(arr,10);
    
    int* arr2=remove10(arr,10);
    int* arr3=replace10(arr,10);
    int* arr4=removegreater10(arr,10);
    int* arr5=replacegreater10(arr,10);
    
    
    
    
   
     
 }
