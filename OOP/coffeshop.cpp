#include <iostream>
#include<vector>
#include <cmath>
using namespace std;

struct menuitem
{
    string name;
    double price;
    string type;
};


class coffeshop{
    string name;
    menuitem menulist [7]
{{"plain egg", 10 , "food"},
{"muffin", 11 , "food"},
{"waffle", 9, "food"},
{"french toast", 8,"food",},
{"cereal", 7 ,"food"},
{"coffee", 3 , "drink"},
{"tea", 9 , "drink"},
};
int order[7]{};

public:

void addorder(){
    for(menuitem it:menulist){
       cout<<it.name<<" "<<it.price<<endl;

    }
    int temp,temp2;
    cout<<"enter order number:";
    cin>>temp;
    cout<<"enter order amount:";
    cin>>temp2;
    order[temp-1]+=temp2;
}

string fullfilorder(){
     for(int it:order){
        if(it>0){
            return "your order is ready";
        }
     }
     return "no orders to full fill";
}

int* listorder(){
    return order;

}

int dueamount(){
    int i=0,sum=0;
    for(menuitem it:menulist){
        sum+=it.price*order[i];
        i++;
    }
    return sum;
}

string cheapestitem(){
string cheap;
int temp=100;
 for(menuitem it:menulist){
        if(it.price<temp){
            cheap=it.name;
            temp=it.price;
        }
}
return cheap;

}

void drinksonly(){
    for(menuitem it:menulist){
        if(it.type=="drink"){
            cout<<it.name<<" ";
        }
    }
cout<<endl;
}
void foodonly(){
for(menuitem it:menulist){
        if(it.type=="food"){
            cout<<it.name<<" ";
        }
    }

cout<<endl;

}


};


int main(){
    coffeshop d;
    d.foodonly();
    d.drinksonly();
    d.cheapestitem();
    d.addorder();
    int* temp=d.listorder();
    for(int i=0;i<7;i++){
        cout<<temp[i]<<" ";

    }
    cout<<endl;
    cout<<d.fullfilorder();
    cout<<endl<< "amountdue:"<<d.dueamount();
}