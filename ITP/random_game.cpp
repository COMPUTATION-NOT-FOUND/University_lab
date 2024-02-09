#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    int guess;
    char contin ,win;
    srand(static_cast<unsigned int>(time(0)));
    int choice;
    
    
    do{
        choice = 1+rand()%100;
        win='L';
        for(int counter=0;counter<5;counter++){
            cout<<"enter guess : ";
            cin>>guess;
            if(guess==choice){
                win='W';
                break;
            }
            else if(guess>choice){
                cout<<"guess to high \n";
            }
            else {
                cout<<"guess to low \n";
            }
            
        }
        cout<<"you "<<win<<'\n';
        cout<< choice << endl;
        cout<<"do you want to continue y/n :";
        cin>> contin ;

    }
    while('y'==contin);

}
