#include <vector>
#include <tuple>
#include <ranges>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<tuple<string, int, bool>> students = {
        {"Ali", 8, true},
        {"Maaz", 6, false},
        {"Usman", 7, true},
        {"Hamza", 9, true},
        {"Maryam", 5, false}
    };
    
    auto passed = students | views::filter([](const auto& s) { return get<1>(s) >= 7; });
    
    cout<<"student who passed the test "<<endl;
    
    int counter =0;
    double total=0;
    int highest=0;
    string student;
    for(auto it:passed){
        if(get<1>(it)>highest){
            highest=get<1>(it);
            student=get<0>(it);
        }
        total+=get<1>(it);
        cout<<get<0>(it)<<endl;
        counter++;
    }
    
    cout<<"average of students passed "<<total/counter<<endl;
    cout<<"highest scoring student "<<student;
}