#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

class date{
    int day;
    int month;
    int year;
    public:
    string formatdate( ){
        return (to_string(day)+"/"+to_string(month)+"/"+to_string(year));
    }
    void setday(int d){
        day=d>31?1:d;
    }
    void setmonth(int m){
        month=(m>12?1:m);
    }
    void setyear(int y){
        year=y;

    }
    date(int d,int m ,int y){
        day=day=d>31?1:d;
        month=(m>12?1:m);
        year=y;


    }
};




int main(){
    date d1(19,10,2024);
    cout<<d1.formatdate()<<endl;
    d1.setday(17);
    cout<<d1.formatdate()<<endl;
    d1.setmonth(5);
    cout<<d1.formatdate()<<endl;
    
}