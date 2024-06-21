#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <tuple>
#include <numeric>


using namespace std;
int main() {
    vector<tuple<string, int>> cities = {
        {"New York", 8623000},
        {"Los Angeles", 3990000},
        {"Chicago", 2716000},
        {"Houston", 2329000},
        {"Phoenix", 1640000},
        {"Philadelphia", 1584000},
        {"San Antonio", 1546000}
    };
    
     auto filtered = cities | views::filter([](const auto& c) { return get<1>(c) >= 1800000; });
     
     auto population =filtered |views::transform([](auto f){return get<1> (f);});
     
     vector<int> result;
     
     copy(begin(population),end(population), back_inserter(result));
     
     auto average=accumulate(result.begin(),result.end(), 0)/result.size();
     
     auto max= ranges::max_element(filtered,[](auto a , auto b){return get<1>(a) < get<1>(b);});
     
     
     cout<<"cities above threshold :"<<endl;
     
     
     
     for(auto it : filtered){
         cout<<get<0>(it)<<endl;
     }
     
     cout<<"average above threshold :"<<average<<endl;
     
     cout<<"city with highest population :"<<get<0>(*max)<<endl;
     
     
     
}