#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
struct player{
    string name;
    int homerun;
    int hits;

};

player players[10]={
    {"player1",10,10},
    {"player2",10,10},
    {"player3",10,10},
    {"player4",10,10},
    {"player5",10,10},
    {"player6",10,10},
    {"player7",10,10},
    {"player8",10,10},
    {"player9",10,10},
    {"player10",10,10},
};

player * search(){
string string;
    cout<<"enter player name :";
    cin.ignore();
    getline(cin,string);
    for(player&item:players){
        if(item.name==string){
            return &item;
        }
    }
    cout<<"player not found"<<endl;
    return(NULL);

}

void displaydata(){
    player * temp=search();
     if(temp==NULL){
    return;
  }
    cout<<"playername :"<<temp->name<<endl;
    cout<<"homerun :"<<temp->homerun<<endl;
    cout<<"hits :"<<temp->hits<<endl;


}

void updatedata(){
  player * temp=search();
  if(temp==NULL){
    return;
  }
  int homerun=0,hit=0;
    cout<<"playername :"<<temp->name<<endl;
    cout<<"enter new homerunscore :";
    cin>>homerun;
    temp->homerun=homerun;
    cout<<"homerun :"<<temp->homerun<<endl;
    cout<<"enter new hitscore:";
    cin>>hit;
    temp->hits=hit;
    cout<<"hits :"<<temp->hits<<endl;


}
 void retindex(){
    player * temp=search();
     if(temp==NULL){
    return;
  }
    int index=temp-players;
    cout<<"player index is :"<<index;


 }

 void displayroster(){
    for(player &item:players){
        cout<<item.name<<endl;
    }
 }
void updateroster(){
    string temp;
    cin.ignore();
    for(player &item:players){
        cout<<item.name<<endl<<"enter replacement!(no input for no change):";
        getline(cin,temp);
        if(temp!=""){
        item.name=temp;}
    }
}


void interface(){
    int option=0;
cout<<"1.display player data"<<endl<<"2.update player data"<<endl<<"3.display player index"<<endl<<
"4.display player roster"<<endl<<"5.update player roster"<<endl;
cout<<"enter option number :";
while(cin>>option){
    cout<<endl;
switch(option){
    case 1: displaydata();
    break;
     case 2: updatedata();
    break;
     case 3: retindex();
    break;
     case 4: displayroster();
    break;
    case 5: updateroster();
    break;
    default:
    cout<<"invalid"<<endl;
    break;

}
cout<<endl<<"1.display player data"<<endl<<"2.update player data"<<endl<<"3.display player index"<<endl<<
"4.display player roster"<<endl<<"5.update player roster"<<endl;
cout<<"enter option number";
cout<<" (enter NUll to stop):";
}
    
}
int main(){
   interface();
}