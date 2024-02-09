#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>
using namespace std;
int main(){
    int value;
    char value2;
    array<char,100> letter{};
    array<int,26> counter{};
    srand(static_cast<unsigned int>(time(0)));
    for(int forcounter =0;forcounter<letter.size();forcounter++){
        value=97+rand()%26;
        value2=value;
        cout<<"letter"<<forcounter+1<<" "<< value2 <<endl;
        letter[forcounter]=value2;
        counter[value-97]++;
        cout<<counter[value-97] <<endl;
    }
    
    for(int forcounter=0 ; forcounter<=25; forcounter++){
        value2=forcounter+97;
        cout<<"charcater "<<value2<<" frequency is "<<counter[forcounter]<<'\n';
       
    }       
}