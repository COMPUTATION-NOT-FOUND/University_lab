
#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

struct book{
    string author,title,publisher;
    double price;
    int stock;

};

    class bookshop{
        vector <book> list;


    public:
    void add(string auth  ,string t,string pub,double pri,int stck){
        book temp{auth,t,pub,pri,stck};
        list.push_back(temp); 
    }
    void display(){
       int counter=1;
        for(book &it:list){
            cout<<counter<<"-"<<it.author<<"- title:"<<it.title<<"- Publisher:"<<it.publisher<<"- $"<<it.price<<"- Stock:"<<it.stock<<endl;
            counter++;
        }
    }

    void buy(){
        string temp,temp2;
        int quantity;
        cout<<"enter author :";
        getline(cin,temp);
        cout<<"enter title :";
        getline(cin,temp2);
         for(book &it:list){
            if(it.author==temp && it.title == temp2){
                cout<<"enter quantity :";
                cin>>quantity;
                if(it.stock<quantity){
                    cout<<"not enough stock";
                }
                else{
                    it.stock=it.stock-quantity;
                }
            }
            else{
                cout<<"book not in stock";
            }
         }


    }


    };

    int main(){
bookshop c;
c.add("jhon doe","The Doe Family","Doe publications",5,10);
c.display();
c.buy();
c.display();


}
