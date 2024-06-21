#include <iostream>
#include <vector>

using namespace std;
class book {
 public:
virtual ~book(){ cout<<"book deconstructor called"<<endl;}
virtual void getdata() = 0;
};

class thriller:public book{ 
    
 string author;
 string title;
 string genre="thriller";
public:
thriller(string a,string t): author(a),title(t){}
void getdata(){
   cout<<"tile :"<<title<<" "<<"author "<<author<<endl; 
}
~thriller(){cout<<"thriller deconstructor called"<<endl;}
};

class fantasy:public book{ 
string author;
 string title;
 string genre="fantasy";
public:
fantasy(string a,string t): author(a),title(t){}
void getdata(){
   cout<<"tile :"<<title<<" "<<"author :"<<author<<endl; 
}
~fantasy(){cout<<"fantasy deconstructor called"<<endl;}

};

int main(){
    string temp,t,a;
    vector<book*> library;
    cout<<"enter book type : ";
     while(cin>>temp){
        cout<<"enter title the author: ";
        if(temp=="thriller"){
            cin>>t>>a;
            library.push_back(new thriller(a,t));
        }
         else if(temp=="fantasy"){
            cin>>t>>a;
            library.push_back(new fantasy(a,t));
     }
     cout<<"enter book type : ";
     
}

for(book* it : library){
    it->getdata();
    delete it;

}

}