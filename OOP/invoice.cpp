
#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

class invoice{
    string partno ="";
    string description="";
    int quantity=0;
    double price =0.0;

    public:
    invoice()
    {   
        string temp;
        int temp2;
        cout<<"enter part number :";
        getline(cin,temp);
        partno=temp;

        cout<<"enter quantity:";
        cin>>temp2;
        quantity=temp2;
        
        cout<<"enter price:";
        cin>>temp2;
        price=temp2;

        cin.ignore();
        cout<<"enter description :";
        getline(cin,temp);
        description=temp;
    }
    void show(){
        cout<<"partno: "<<partno<<endl<<"quantity: "<<quantity<<endl<<"price: "<<price<<endl<<"description:"<<description;
    }

    };

int main(){

invoice b;
b.show();

}
