# include <iostream>



class shape {
    public:
        virtual void draw(){
                std::cout<<"I am shape Draw()";
        }

};

class circle{
    public:
     void draw() {
        std::cout<<"I am shape circle Draw()";
    }

};

class square:public shape, public circle{
    public:
    void draw(){
        std::cout<<"I am sqr Draw()";
    }


};


int main(){
    shape* ptr;
    square obj;
    ptr=&obj;

    ptr->draw();


    circle*ptr2;
    ptr2=&obj;
    ptr2->draw();
}

