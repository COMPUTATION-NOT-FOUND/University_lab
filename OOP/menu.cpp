#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
struct menuitem{
    string item;
    double price;

};
menuitem menulist [7]{{"plain egg", 10.20},
{"muffin", 10.11},
{"waffle", 9.15},
{"french toast", 10},
{"cereal", 10},
{"coffee", 10},
{"tea", 10},
};

void order(){
    vector<menuitem> order;
    int number;
    double nettotal;
    for(auto &item:menulist){
    cout << "Item: " << item.item << ", Price: $" << item.price << "\n";}
    cout<<"enter menu item number (1-7) :";
    while(cin>>number){
        while(number>7 && number<1){
        cout<<"invalid number please re-enter :";
        cin>>number;
        }
        order.push_back(menulist[number-1]);
        cout<<"enter menu item number (contrl z to stop or /0) :";
    }
    cout<<"bill"<<endl;
    for(vector<menuitem>::iterator it=order.begin();it<order.end();it++){
        cout<<it->item<<" $"<<fixed<<setprecision(2)<<it->price<<endl;
        nettotal+=it->price;
    } 
    cout<<"net total $"<<nettotal;
}
int main(){
    order();
}