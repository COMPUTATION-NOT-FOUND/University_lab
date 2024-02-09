#include<iostream>
#include<iomanip>
#include <cctype>
#include <string>
using namespace std;

string replace(string n){

int position=0,count=0;
string rep,m;
    cout << "enter what to replace: ";
    cin.ignore();
    getline(cin, m);
    cout << "enter replacement: ";
    getline(cin, rep);
position=n.find(m);
    while(position!= string::npos){
        n.replace(position,m.size(),rep);
       
        position=n.find(m,position+1);
    }
    
   return n;
}


int spacecount(string n){
    int position=0,count=0;
    while(position!= string::npos){
        if(n[position]==' '){
            count++;
        }
        position=n.find(" ",position+1);
    }
    
    return count;
    
}

int setencecount(string n){
    int position=0,count=0;
    while(position!= string::npos){
        if(n[position]=='.'){
            count++;
        }
        position=n.find('.',position+1);
    }
    
    return count;
    
}


int wordcount(string n){
    int position=0,count=0;
    while(position!= string::npos){
        if(n[position]==' '){
            count++;
        }
        position=n.find(" ",position+1);
    }
    
    return count+1;
    
}

int articlescount(string n){
    int position=0,count=0;
    
    while((position=n.find(" a ",position))!= string::npos){
            count++;
        position+=3;
    }
    position=0;
    while((position=n.find(" an ",position))!= string::npos){
            count++;
        position+=4;
    }
    position=0;
     while((position=n.find(" the ",position))!= string::npos){
            count++;
        position+=5;
    }
    
    return count;
    
}
 

   


int main() {
    string input;
    int size,choice=5;
    cout<<"enter string :";
    getline(cin,input);
    size=input.size();
while(choice)
   { cout<<"enter 0 to stop \n 1 for replacement \n 2 for space count \n 3 setence count \n 4 for word count \n 5 for article count \n input:" ;
   cin>>choice;
   switch(choice){
    case 1:
    input=replace(input);
    cout<<input<<'\n';
    break;
    case 2:
    cout<<spacecount(input)<<"\n";
    break;
    case 3:
    cout<<setencecount(input)<<"\n";
    break;
    case 4:
    cout<<wordcount(input)<<"\n";
    break;
    case 5:
    cout<<articlescount(" "+input+" ")<<"\n";
    break;
    default:
    cout<<"invalid choice \n";
    break;

   }
   
   
   }
       
    
}