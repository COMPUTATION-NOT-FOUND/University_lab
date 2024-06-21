#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct record{
            string name;
            int score;
            int hours;
            


};

class student {
    string name;
    string std_id;
    char gender;
vector<vector<record>> mygpa;
    public:
    void entercredit(){
        int n=0,s=0,score=0;
        record temp;
        vector<record> temp2;
        cout<<"enter no. of courses :";
        cin>>n;
        for(int i=0;i<n;i++){
            
            cout<<" enter name , score , hours :";
            cin>>temp.name>>temp.score>>temp.hours;
            temp2.push_back(temp);
        } 
        mygpa.push_back(temp2);     
    }

    void calgpa(int semester){
        int totalH=0,scored=0;
        for(auto it: mygpa[semester-1])
        {
         totalH+=it.hours;
         scored+=it.score*it.hours;   
        }
        cout<<semester<<"smester gpa is:"<<scored/totalH<<endl;
    }

    void calcgpa(){


        int totalH=0,scored=0,gpasum=0,count=0;
        for(auto it: mygpa){
            for(auto it2:it){
                totalH+=it2.hours;
                scored+=it2.score*it2.hours; 
            }
            gpasum+=(scored/totalH);
            count++;
        }
        cout<<"your cgpa is:"<<gpasum/count<<endl;
       
    }

    };
    
int main(){

    student a;
    a.entercredit();
    a.calgpa(1);
    a.calcgpa();
    a.entercredit();
    a.calgpa(2);
    a.calcgpa();

}




        

