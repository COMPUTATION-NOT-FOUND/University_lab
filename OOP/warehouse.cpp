#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

class Warehouse{
vector<int> code;
vector<int> item;

public:
void stock(int c,int i){
if((find(code.begin(),code.end(),c))==code.end()){
    code.push_back(c);
    item.push_back(i);
    cout<<to_string(i)+" added to "+to_string(c)<<endl;
}
else{
    item[distance(code.begin(),(find(code.begin(),code.end(),c)))]+=i;
    cout<<to_string(i)+" added to "+to_string(c)<<endl;

}

}
void order(int c , int i){

if((find(code.begin(),code.end(),c))==code.end()){
    cout<<"invalid code"<<endl;
}
else if( item[distance(code.begin(),(find(code.begin(),code.end(),c)))]>i){
    item[distance(code.begin(),(find(code.begin(),code.end(),c)))]-=i;
    cout<<to_string(i)+" deducted from "+to_string(c)<<endl;
}
else
    {cout<<"invalid ammount"<<endl;}

}

void show(int c){
    if(find(code.begin(),code.end(),c)==code.end()){
        cout<<"invalid code"<<endl;
    }
    else{
        cout<<"Quantity of "+to_string(c)+":";
        cout<<item[distance(code.begin(),(find(code.begin(),code.end(),c)))]<<endl;
        
    }
    


}


};


int main(){
    Warehouse w;
    w.stock(1,10);
    w.stock(2,20);
    w.stock(3,30);
    w.stock(1,5);
    w.order(1,3);
    w.order(2,25);
    w.order(2,11);
    w.order(4,5);
    w.show(1);
    w.show(2);
    w.show(3);
    w.show(4);
 
    
}