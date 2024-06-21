#include <vector>
#include <iostream>

using namespace std;
class Shape {
public:
virtual ~Shape() {}
virtual double area() const = 0;
};

class Circle : public Shape {
private:
double radius;
public:
Circle(double r) : radius(r) {}
double area() const override {
return 3.14159 * radius * radius;
}
};

class Rectangle : public Shape {
private:
double width, height;
public:
Rectangle(double w, double h) : width(w), height(h) {}
double area() const override {
return width * height;
}
};

double total_area(vector<Shape*> & vec){
    double i;
    for(Shape* it:vec){
        i+=it->area();
    }
    return i;
}

double circle_area(vector<Shape*> &vec){
    double i;
    for(Shape* it:vec){
        Circle *circle=dynamic_cast<Circle*>(it);
        if(circle)
        {i+=it->area();}
    }
    return i;
}


int main(){
    vector<Shape*> input;
    input.push_back(new Rectangle(2,2) );
    input.push_back(new Rectangle(2,2) );
    input.push_back(new Rectangle(2,2) );
    input.push_back(new Circle(2) );
    input.push_back(new Circle(2) );
    input.push_back(new Circle(2) );

    cout<<total_area(input)<<endl;
    cout<<circle_area(input)<<endl;

    for( Shape* it :input){
        delete it;
    }



}

