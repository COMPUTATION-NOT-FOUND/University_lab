#include <iostream>
using namespace std;


class book{
    string name,isbn,author,publisher;

  public:
    string getname(){
        return name;
    }
     string getisbn(){
        return isbn;
    }
     string getauthor(){
        return author;
    }
     string getpublisher(){
        return publisher;
    }
    string getbookinfo(){
        return("book name:"+getname()+" isbn:"+getisbn()+" author:"+getauthor()+" publisher:"+getpublisher());

    }
   
    book(string a, string b, string c, string d) : name(a), isbn(b), author(c), publisher(d) {}


};

int main(){
    book Booktest[5] {
        {"a","1","jhon doe","Doe publications"},
        {"b","2","jane doe","Doe publications"},
        {"c","3","sister doe","Doe publications"},
        {"d","4","baby doe","Doe publications"},
        {"e","5","brother doe","Doe publications"},
    };
    for(auto it:Booktest){
        cout<<it.getbookinfo()<<endl;

    }
    
}