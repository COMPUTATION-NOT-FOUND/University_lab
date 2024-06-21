#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
vector <string> v= {"This", "   is", "a  ", "very ", "important"," task   "};

 for (auto& it : v) {
         it.erase(remove(it.begin(), it.end(), ' '), it.end());
    }
    
string l="";
 for (const auto& str : v) {
        l =l+str+" ";
    }

cout<<l;

}