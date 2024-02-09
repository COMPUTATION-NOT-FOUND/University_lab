#include<iostream>
using namespace std;


struct vector2D {
     double x; 
     double y;
};

void print(const vector2D& v){
 cout<<"("<<v.x<<","<<v.y<<")";
    
}
vector2D add(const vector2D& v1, const vector2D& v2)
{
    double i,j;
    //vector2D v3;
    i=v1.x+v2.x;
    j=v1.y+v2.y;
    
return {i,j};
}
vector2D operator+(const vector2D& v1, const vector2D& v2)
{
    vector2D v3{v1.x+v2.x,v1.y+v2.y};
    return v3;
}
vector2D operator*(const vector2D& v, double s){
     vector2D v3{v.x*s,v.y*s};
    return v3;
}
void operator*=(vector2D& v, double s){
    v.x*=s;
    v.y*=s;
}
double dot(const vector2D& v1, const vector2D& v2){
    double dot1;
    dot1=v1.x*v2.x+v1.y*v2.y;
    return dot1;
}

int main()
 {
vector2D v1 {1.2, 3.4};
vector2D v2 {5.6, 7.8}; 
print(v1); cout << "\n"; 
print(v2); cout << "\n"; 
vector2D v3 = add(v1, v2); 
print(v3); cout << "\n"; 
vector2D v4 = v1 + v2; print(v4); 
cout <<"\n";
 vector2D v5 = v1 * 2.0; print(v5); 
cout << "\n";
 v1 *= 2.0;
print(v1); cout <<"\n"; 
double d = dot(v1, v2);
cout << d << "\n"; 
}
