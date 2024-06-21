# include <iostream>



class shape {
    public:
        void draw(){
                std::cout<<"I am shape Draw()";
        }

};

class circle:   public shape{
    public:
     void draw() {
        std::cout<<"I am shape circle Draw()";
    }

};

class square:public shape{
    public:
    void draw(){
        std::cout<<"I am sqr Draw()";
    }


};


int main(){
    shape* ptr;
    circle obj;
    ptr=&obj;

    ptr->draw();


    circle*ptr2;
    ptr2=&obj;
    ptr2->draw();
}

