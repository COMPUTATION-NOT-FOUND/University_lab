#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>
using namespace std;
int main(){
    int value;
    array<int,10> marks{};
    array<int,10> counter{};
    srand(static_cast<unsigned int>(time(0)));
    for(int forcounter =0;forcounter<marks.size();forcounter++){
        value=rand()%101;
        cout<<"marks"<<forcounter+1<<" "<<value<<endl;
        marks[forcounter]=value;
        counter[value/10]++;
        cout<<counter[value/10] <<endl;
    }
    
    for(int forcounter=0 ; forcounter<=10; forcounter++){
        if (forcounter==10){
            cout<<100<<"  : ";
        }
        else{
            cout<<forcounter*10<<"-"<<forcounter*10+9<<": ";
        }
        for(int i=0;i<counter[forcounter];++i){
            cout<<'*';
        }
        cout<<endl;

    }
}