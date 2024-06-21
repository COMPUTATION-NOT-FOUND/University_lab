#include <queue>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

void to_infix(string s){
    queue<string> tokens;
    stack<string> operations;
    string postfix = s;
    string token = "";
    string a;
    string b;

    for(char c: postfix){
        if(!isspace(c)){
            token += c;
            tokens.push(token);
            token = "";
        }
    }

    while(!tokens.empty()){
        if(isdigit(tokens.front()[0]) || isalpha(tokens.front()[0])){
            operations.push(tokens.front());
            tokens.pop();
        }
        else{
            b = operations.top();
            operations.pop();
            a = operations.top();
            operations.pop();
            operations.push("(" + a + tokens.front() + b + ")");
            tokens.pop();
        }
    }

    cout << operations.top()<<endl;
}

int main(){
    to_infix("A B + C -");
    to_infix("A B / C *");


    return 0;
}
