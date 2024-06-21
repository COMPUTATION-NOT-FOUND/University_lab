#include <iostream>
#include <set>


using namespace std;
class IntegerSet {
private:
    std::set<int> integers;

public:

void addinteger(){
    int i;
    cout<<"enter integer to insert: ";
    cin>>i;
    integers.insert(i);

}

void removeinteger(){
    int i;
    cout<<"enter integer to remove: ";
    cin>>i;
    integers.erase(i);

}


void display(){
    for(const auto & it :integers){
        cout<<it<<" ";
    }
    cout<<endl;
}


};

int main(){
IntegerSet a;
a.addinteger();
a.addinteger();
a.addinteger();
a.removeinteger();
a.display();


}