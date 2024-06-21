#include <iostream>
#include <vector>
#include <ranges> 
#include <iterator> 
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> numbers = {1,2,3};

    if(std::ranges::any_of(numbers,[](int x){return !(x%2);})){
        std::cout<<"there is even";
    }
    auto sub=std::ranges::subrange(numbers.begin()+1,numbers.end());
    std::cout<<*(std::ranges::min_element(sub));
    
    std::cout << "Sorted numbers:";
    for (int num : numbers) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}
