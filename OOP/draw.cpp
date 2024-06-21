#include <iostream>
#include <cmath>
using namespace std;

class draw{

int side1=0;
int side2=0;
int radius=0;
int angle=0;
public:
draw (int s1, int s2, int r,int a): side1(s1),side2(s2),radius(r),angle(a){}
draw(){
  }

int getside1(){
    return side1;
}
int getside2(){
    return side2;
}
int getangle(){
    return angle;
}
 int getradius(){
return radius;
 }
 
void setside1(int i){
 side1=i;
}
void setside2(int i){
    side2=i;
}

void setradius(int i){
    radius=i;
}

void setangle(int i){
    angle=i;
}


};
class rhombus:public draw{

public:
rhombus(){
    int x;
    cout<<"enter rhombus base :";
    cin>>x;
    setside1(x);
    cout<<"enter rhombus angle :";
    cin>>x;
    setangle(x);

}
rhombus(int s1, int s2, int r,int a):draw(s1,  s2,  r, a) {}
void drawrhombus(){
    cout<<"Rhombus area is: "<<getside1()*getside1()*sin(getangle()*M_PI/180)<<endl;

}



};
class rectangle:public draw{

public:
rectangle(){
    int x=1;
    cout<<"enter side 1 :";
    cin>>x;
    setside1(x);
    cout<<"enter side 2 :";
    cin>>x;
    setside2(x);

}
rectangle(int s1, int s2, int r,int a):draw(s1,  s2,  r, a) {}
void drawrectangle(){
  cout<<"Rectangle area is : "<<getside1()*getside2()<<endl;
}

};
class circle:public draw{
public:
circle(){
    int x=1;
    cout<<"enter radius :";
    cin>>x;
    setradius(x);
    

}

circle(int s1, int s2, int r,int a):draw(s1,  s2,  r, a) {}
void drawcircle(){
    cout<<"circle area is:"<<2*M_PI*getside1()<<endl;
}
void drawcircle2(){
    cout<<"circle2 area is:"<<2*M_PI*getside2()<<endl;
}
void drawcircler(){
    cout<<"circler area is:"<<2*M_PI*getradius()<<endl;
}

};

int main(){
circle a(2,4,2,90);
rhombus b(2,4,2,90);
rectangle c(2,4,2,90);

a.drawcircle();
a.drawcircle2();
a.drawcircler();
b.drawrhombus();
c.drawrectangle();

circle d;
rhombus e;
rectangle f;
d.drawcircler();
e.drawrhombus();
f.drawrectangle();


}