#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

class shoppingcart { 

vector <string> item;

public:

void additem(string i){
    item.push_back(i);
    cout<< i<<" addedn to cart "<< endl;
}


void removeitem(string i){
    auto pos= find(item.begin(),item.end(),i) ;
    if(pos!=item.end())
    {item.erase(pos);
}
    else {
        cout<<"item not found in cart"<<endl;
    }
}
void displaycart(){
    for(const auto &  it:item){
        cout<<it;
    }

}

};

int main(){
    shoppingcart cart;

    int choices=5;

while(choices!=4){

    cout << "1. Add item to cart" << endl;
    cout << "2. Remove item from cart" << endl;
    cout << "3. View cart" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choices;
    switch (choices) {
            case 1: {
                string item;
                cout << "Enter item to add: ";
                cin >> item;
                cart.additem(item);
                break;
            }
            case 2: {
                    string item;
                    cout << "Enter item to remove: ";
                    cin >> item;
                    cart.removeitem(item);
                    break;
            }
            case 3:
                cart.displaycart();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;

}
}
}