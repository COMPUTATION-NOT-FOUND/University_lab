#include <iostream>
#include <vector>
 using namespace std;

 class student{
    int Scores[5];

    public:

    void input(){
        int temp;
        for(int i=0;i<5;i++){
            cout<<"enter value :";
            cin>>temp;
            Scores[i]=temp;
        }

    }

    int totalscores(){
        int total=0;
        for(int it:Scores){
            total+=it;

        }
        return total;
    }

 };


 int main(){
    vector <student> a;
    int x=0;
    for(int i=1;i<=3;i++){
        cout<<"entry "<<i<<endl;
        student temp;
        temp.input();
        a.push_back(temp);
        

    }

for(student it:a){
    if(x<it.totalscores()){
        x=it.totalscores();
    }

}

cout<<"other contender highest total is :"<<x;

    
 }