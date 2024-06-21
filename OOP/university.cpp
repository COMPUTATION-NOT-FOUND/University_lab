#include <iostream>
 using namespace std;

 class student{
   protected:
    int id;
    string name;
    public:
    student(int i , string n):id(i),name(n){}
    void getstudent(){
        cout<<"ID:"<<id<<" NAME:"<<name<<endl;    }
 };

 class mark:public student{
   protected:
    int moop,mds,mdb,mpf;
   public:
   mark(int i,string n,int p, int s,int b, int f): student(i,n),moop(p),mds(s),mdb(b),mpf(f){}
   void getmarks(){
      cout<<"oop marks:"<<moop<<" data structures marks:"<<mds<<" data base marks:"<< mdb<<" programing fundamental marks:"<<mpf<<endl;

   }

 };

 class result:public mark {
int total_marks= moop+mds+mdb+mpf;
double avg_marks=total_marks/4;
public:

result(int i,string n,int p, int s,int b, int f):mark(i,n,p,s,b,f) {}
void display(){
   cout<<"total marks:"<<total_marks<<" average:"<<avg_marks<<endl;

}
 };

 int main(){
   result a(0,"usman",10,9,8,7);
   a.getstudent();
   a.getmarks();
   a.display();

 }

