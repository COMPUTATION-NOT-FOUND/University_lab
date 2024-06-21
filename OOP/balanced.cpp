#include <stack>
#include <iostream>
using namespace std;
class mystack{
    stack <char> a;

    public:

    bool isMatching(char opening, char closing) {
        return (opening == '(' && closing == ')') ||
               (opening == '[' && closing == ']') ||
               (opening == '{' && closing == '}');
    }  

    void validate(string s){
        a.push(s[0]);
        for(int i=1;i<s.size();i++){
           
            if(!a.empty()&&isMatching(a.top(),s[i])) {
                a.pop();
            }
            else {
                a.push(s[i]);
            }
            
        }
        cout<< a.empty()<<endl;
    }

};


int main(){
    mystack a;
    a.validate("{[}]");
    mystack b;
    b.validate("[()]{}{[()()]()}");
}