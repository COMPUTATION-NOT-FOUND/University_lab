#include <iostream>


using namespace std;


class transport{
    protected:
    string packageID;
    string vesselmodel;
    string route;
    string type;
    public:
    transport(string a ,string b , string c):packageID(a),vesselmodel(b),route(c){}
    void display(){
        cout<<"package ID:"<<packageID<<" vessel model:"<< vesselmodel<<" route:"<<route<<" type:"<<type <<endl;
    }
};


class sea:public transport {
    public:
    sea(string a ,string b , string c):transport(a,b,c) {type="sea";}
    
};
class land:public transport {
    public:
    land(string a ,string b , string c):transport(a,b,c) {type="land";}   
    
};
class air:public transport {
    public:
    air(string a ,string b , string c):transport(a,b,c) {type="air";}
    
};

class rentalroom{
    
public:
string facilityType;
string availabilityStatus;
int rentalDuration;

rentalroom(string type, string status, int duration):
 facilityType(type), availabilityStatus(status),rentalDuration(duration) {}

void reserveFacility() {
cout << "Facility reserved for " << rentalDuration << " days." << endl;
}
virtual ~rentalroom(){}
};


class fittingroom: public rentalroom{

string roomSize;
int numberOfCustomers;

public:
fittingroom(string type, string status, int duration, string size,int customers):
 rentalroom(type, status, duration), roomSize(size),numberOfCustomers(customers) {}

void Experience() {
cout << "Enjoy your fitting experience in a " << roomSize << " fittingroom." << endl;
}
    
};

class exhibitionhall: public rentalroom{

string location;
int displayunits;

public:
exhibitionhall(string type, string status, int duration, string l,
int d)
: rentalroom(type, status, duration), location(l),displayunits(d){}

void Experience(){
   cout << "Enjoy Exhibitionhall at " << location<< endl; 
}


};

class order {
public:
 string continent;
 rentalroom* room;
 transport* transportation;

void overview(){
    cout<<continent<<endl;
    transportation->display();
    room->reserveFacility();
     fittingroom* fitRoom = dynamic_cast<fittingroom*>(room);
        if (fitRoom) {
            fitRoom->Experience();
        } else {
            exhibitionhall* exHall = dynamic_cast<exhibitionhall*>(room);
            if (exHall) {
                exHall->Experience();}
                }
                }
                };


int main(){
order a;
string temp1 , temp2 ,temp3 ;

cout<<"enter continent :";
cin>>temp1;
a.continent=temp1;
if(temp1=="europe"){
    cout<<"sea or air :";
    cin>>temp2;
    if(temp2=="sea"){
    a.transportation=new sea("1","1","suez canal");
    }
    else{
        a.transportation=new air("1","1","Turkey");
    }
}
else{
    cout<<"land or sea :";
    cin>>temp2;
    if(temp2=="sea"){
    a.transportation=new sea("1","1","indian ocean");
    }
    else{
        a.transportation=new air("1","1","Iran");
}
}

cout<<"additional services :";
cin>>temp3;

if(temp3=="fittingroom"){
    a.room= new fittingroom ("fittingroom", "available",10, "10 feet",100);
}
else if(temp3=="exhibition")
{
    a.room= new exhibitionhall ("exhibitionhall","available",10,temp1,10);
}
else{
    a.room=nullptr;
}


a.overview();






}