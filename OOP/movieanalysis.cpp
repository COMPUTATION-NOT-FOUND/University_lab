
#include <iostream>
#include <iomanip>

using namespace std; 
void movie(){
    string a;
    int b,c;
    double d,e,f;
    cout<<"enter movie name :" ;
    getline(cin,a);
    cout<<"number of child ticket sold :";
    cin>>b;
    cout<<"number of adult ticket sold :";
    cin>>c;
    cout<<"child ticket price :";
    cin>>d;
    cout<<"adult ticket price :";
    cin>>e;
    cout<<"percentage charity :";
    cin>>f;

    cout<<"movie name............:\t"<<right<<a<<endl;
    cout<<"number of tickets sold:\t"<<right<<b+c<<endl;
    cout<<"gross amount..........:\t"<<right<<"$"<<fixed<<setprecision(2)<<b*d+c*e<<endl;
    cout<<"percentage charity....:\t"<<right<<fixed<<setprecision(2)<<f<<"%"<<endl;
    cout<<"amount donated........:\t"<<right<<"$"<<fixed<<setprecision(2)<<((b*d+c*e)*f/100)<<endl;
    cout<<"netsale...............:\t"<<right<<"$"<<fixed<<setprecision(2)<<(b*d+c*e)-((b*d+c*e)*f/100);


}

int main(){
    movie();
}