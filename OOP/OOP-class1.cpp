#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
struct menuitem{
    string item;
    double price;

};
void weightinpounds(){
    int weight;
    cout<<"enter weight in kilograms :";
    cin>>weight;
    cout<<setprecision(2)<<"weight in pounds"<<weight*2.2<<endl;  
}

void studentrecord(){
    vector<double> marks;
    int runningsum=0,runningcount=0;
    double mark=0;

    string name;
    cout<<"enter name  :";
    getline(cin, name);
    cout<<"enter marks ctrl z to stop :";
    while(cin>>mark){
        runningcount++;
        runningsum+=mark;
        marks.push_back(mark);
        cout<<"enter marks ctrl z to stop :";
    }
    cout<<"student name :"<<name<<endl;
    cout<<"marks :";
    for(auto it=marks.begin();it<marks.end();it++){
        cout<<fixed<<setprecision(2)<<*it<<" ";
    }  
cout<<endl<<"average :"<<setprecision(2)<<runningsum/runningcount;
    
}

void movie(){
    string a;
    int b,c;
    double d,e,f;
    cout<<"enter movie name , child ticket , adult ticket , child ticket price ,adult ticket price , percentage charity";
    cin>>a>>b>>c>>d>>e>>f;

    cout<<"movie name"<<a<<endl;
    cout<<"number of tickets sold"<<b+c<<endl;
    cout<<"gross amount"<<b*d+c*e<<endl;
    cout<<"percentage charity"<<f<<endl;
    cout<<"amount donated"<<((b*d+c*e)*f/100)<<endl;
    cout<<"netsale"<<(b*d+c*e)-((b*d+c*e)*f/100);


}

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
    for(auto &item:menulist){
    cout << "Item: " << item.item << ", Price: $" << item.price << "\n";}
    cout<<"enter menu item number";
    while(cin>>number){
        order.push_back(menulist[number]);
        cout<<"enter menu item number (contrl z to stop)";
    }
    for(auto it=order.begin();it<order.end();it++){
        cout<<setprecision(2)<<it->item<<" ";
    }  
} 

    





int main(){
 
    //studentrecord();
    order();



}