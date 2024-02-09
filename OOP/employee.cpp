#include <iostream>
using namespace std;


class employee{
    string name,lastname;
    double monthlysalary;
    public:
    double yearlysalary(){
        return monthlysalary*12;
    }
    void raise(double i){
        monthlysalary*=i;

    }
    void getemployee(){
        cout<<"employee name :"<<name+" "+lastname<<endl;
        cout<<"employee monthly salary :"<<monthlysalary<<endl;

    }
employee(string a , string b , double c){
    name=a;
    lastname=b;
    if(c<0){
        monthlysalary=100;
    }
    else{
        monthlysalary=c;
    }

}

    };

int main(){
    employee a ("jhon","doe",0);
    employee b ("janie","doe",1000);
    a.getemployee();
    a.raise(10);
    a.yearlysalary();
    a.getemployee();
    b.getemployee();
    b.raise(10);
    b.yearlysalary();
    b.getemployee();

    
}