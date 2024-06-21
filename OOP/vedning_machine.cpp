#include <iostream>
#include <string>


using namespace std;

struct item{

    string item;
    double price;
    int stock;


};

class vendingM{

item stock[10]{
    {"chips0",10,9},
    {"chips1",10,9},
    {"chips2",10,9},
    {"chips3",10,9},
    {"chips4",10,9},
    {"chips5",10,9},
    {"chips6",10,9},
    {"chips7",10,9},
    {"chips8",10,9},
    {"chips9",10,9},
};

double cash;


public:
void display(){
     cout<<"displaying items";
int c=0;
 for(const item &it :stock){
    cout<<c<<" "<<it.item<<endl;
    c++;
}

}

void accept(int i,double p ){
   if( p!= stock[i].price){
    exit(0);
    cash+=i;
}
}


void select(int i){
     if(i>9 || i<0){
        exit(0);
    }
    cout<<"selected : "<<stock[i].item<<endl;
}

int cost (int i){
    cout<<"price : "<<stock[i].price<<endl;
    return stock[i].price;

}

void release(int i){
    cout<<"releasing item "<<endl;
    stock[i].stock-=1;
}


void buy(){
int s;
double p;

display();
cout<<"select : "; 
cin>>s;
select(s);
cost(s);
cout<<"enter cash : ";
cin>>p;
accept(s,p);
release(s);



}


~ vendingM(){};
 };

int main(){
vendingM a;

while(1)
{
a.buy();

}
}