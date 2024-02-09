    #include <iostream>
    #include <stdexcept>

    using namespace std;

    class  mystack{
        static const int maxsize=5;
        int arr[maxsize];
        int top=-1;
    public:

    bool isfull(){
        return top == maxsize-1;
    }
    bool isempty(){
        return top == -1;
    }
    void push(int var){
        if(isfull()){
            throw std::overflow_error("stack is full");
        } 
        else{
            arr[++top]=var;
        }
    }
    int pop(){
        if(isempty()){
        throw std::underflow_error("stack is empty") ;
        }
        else
        {return arr[top--];}}

    int front(){
        if(isempty()){
        throw std::underflow_error("stack is empty") ;
        }
        else
        {return arr[top];}
    }

    int size(){
        return top+1;
    }
        
        
    };
