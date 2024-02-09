#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int index=1,ncounter=0,pcounter=0;
   double price,temp=-1,cash=10000,share=0;
   string output;
   cout<<"period"<<setw(7)<<"price"<<setw(7)<<"cash"<<setw(12)<<"shares"<<setw(9)<<"values"<<endl;
   cout<<"--------------------------------------------------------------------"<<endl;
   while (cin >> price)
   {
    if (temp==-1){
        temp=price;
        cout<<fixed << setprecision(3)<<setw(2)<<index<<setw(10)<<price<< fixed << setprecision(2)<<setw(10)<<cash<<setw(10)<<share<<setw(10)<<cash+share*price<<endl;
        index++;
        continue;
    
   }
    if(temp>price){
        if(pcounter>=3){
        ncounter++;
        }
        else{
        ncounter++;
        pcounter=0;
        }
   }
    else{
        if(ncounter>=3){
        pcounter++;
        }
        else{
            pcounter++;
            ncounter=0;
        }

   }
    if(ncounter>=3&&pcounter==1){
        ncounter=0;
        share=cash/price;
        cash=0;
        cout<<fixed << setprecision(3)<<setw(2)<<index<<setw(10)<<price<<setw(10)<< fixed << setprecision(2)<<cash<<setw(10)<<share<<setw(10)<<(cash+share*price)<<endl;
    }
    else if(ncounter==1&&pcounter>=3){
        pcounter=0;
        cash=share*price;
        share=0;
        cout<<fixed << setprecision(3)<<setw(2)<<index<<setw(10)<<price<<setw(10)<< fixed << setprecision(2)<<cash<<setw(10)<<share<<setw(10)<<(cash+share*price)<<endl;

    }
    else{
        cout<<fixed << setprecision(3)<<setw(2)<<index<<setw(10)<<price<<setw(10)<< fixed << setprecision(2)<<cash<<setw(10)<<share<<setw(10)<<(cash+share*price)<<endl;
    
    }

   temp=price;
   index++;
   }
   return 0;
}