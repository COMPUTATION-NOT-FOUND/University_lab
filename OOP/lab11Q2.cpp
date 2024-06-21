#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

using namespace std;

int main() {
    
    vector<int> numbers = {2, 6, 11, 15, 3, 7, 4, 5};
    int target=0;
    cout<<"enter targert:";
    cin>>target;
    
   auto Numbers = numbers | std::views::filter([&numbers](int x) {
        return std::find(numbers.begin(), numbers.end(), 9 - x) != numbers.end();
    });
   
   
    for (int num : Numbers) {
        std::cout << num << " " << target-num<<endl;
    }

    return 0;
}