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

class Warehouse{
vector<int> code;
vector<int> item;

public:
void stock(int c,int i){
if((find(code.begin(),code.end(),c))==code.end()){
    code.push_back(c);
    item.push_back(i);
}
else{
    item[distance(code.begin(),(find(code.begin(),code.end(),c)))]+=i;
}

}
void order(int c , int i){

if((find(code.begin(),code.end(),c))==code.end()){
    cout<<"invalid code";
}
else if( item[distance(code.begin(),(find(code.begin(),code.end(),c)))]>i){
    item[distance(code.begin(),(find(code.begin(),code.end(),c)))]-=i;
}
else
    {cout<<"invalid ammount";}

}

void show(int c){
    if(find(code.begin(),code.end(),c)==code.end()){
        cout<<"invalid code";
    }
    else{
        cout<<*find(code.begin(),code.end(),c);
    }
    


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