#include <iostream>


using namespace std;

class vehicle{

int price;
public:
vehicle(int p){
    price=p;
}

~vehicle(){
    cout<<"vehicle destroyed"<<endl;
}

void display(){
    cout<<"price:"<<price;

}
};

class car: public vehicle{
   int capacity;
   int doors;
   string fuel; 

public:

car(int p,int c,int d,string f):vehicle(p),capacity(c),doors(d),fuel(f){}

void display(){
    vehicle::display();
    cout<<" capacity:"<<capacity<<" doors:"<<doors<<" fuel:"<<fuel;

}
~car(){
    cout<<"car destroyed"<<endl;
}
};

class motorcycle :public vehicle{
 int gears;
 int cylinder;
 int wheel;
 public:

 motorcycle(int p,int g,int c,int w):vehicle(p),cylinder(c),gears(g),wheel(w){}

 void display(){
    vehicle::display();
    cout<<" gears:"<<gears<<" cylinder:"<<cylinder<<" wheel:"<<wheel;

}
~motorcycle(){
    cout<<"motorcycle destroyed"<<endl;
}
};


class audi :public car{
    string model;

public:
audi(string m,int p,int c,int d,string f):car( p,c, d, f), model(m){}
 void display(){
    car::display();
    cout<<" model:"<<model<<endl;


}
~audi(){
    cout<<"audi destroyed"<<endl;
}
};

class yamaha :public motorcycle{
    string mtype;
    public:
    yamaha(string m,int p,int g,int c,int w): motorcycle( p, g, c, w),mtype(m){}
    void display(){
    motorcycle::display();
    cout<<" make:"<<mtype<<endl;


}

~yamaha(){
    cout<<"yamaha destroyed"<<endl;
}
};

int main(){
    audi a("0001",1000,5,4,"petrol");
    a.display();
    yamaha y("0002",500,5,2,2);
    y.display();

}