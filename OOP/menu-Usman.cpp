#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
struct menuitem{
    string item;
    double price;

};
menuitem menulist [7]{{"plain egg", 10},
{"muffin", 10},
{"waffle", 10},
{"french toast", 10},
{"cereal", 10},
{"coffee", 10},
{"tea", 10},
};

void order(){
    vector<menuitem> order;
    int number;
    double nettotal;
    cout<<"welcome to resturant OOP"<<endl;
    for(auto &item:menulist){
    cout << "Item: " << item.item << ", Price: $" << item.price << "\n";}
    cout<<"enter menu item number (1-7) :";
    
    while(cin>>number){
        while (number<1||number>7)
        {
            cout<<"INVALID!"<<endl<<"re_enter number :";
            cin>>number;
        }
        
        order.push_back(menulist[number-1]);
        cout<<"enter menu item number (contrl z to stop)";
    }
    cout<<endl<<"bill"<<endl<<"-------------------"<<endl;
    for(menuitem* it= &order.front() ; it <&order.back() + 1;it++){
        //cout<<setprecision(2)<<*(it).item<<" "<<*(it).item;
        cout<<setprecision(2)<<it->item<<" :$"<<it->price<<endl;
        nettotal+=it->price;
    }
     cout<< "-------------------" <<endl<<"total bill :$" <<nettotal;
}
int main(){
    order();
}