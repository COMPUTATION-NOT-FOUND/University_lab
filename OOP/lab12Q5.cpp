#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <tuple>
#include <numeric>
#include <string>


using namespace std;
int main(){
    vector<tuple<string, int>> dataset = {
        {"2022-01-01", 25}, {"2022-01-02", 27}, {"2022-01-03", 30},
        {"2022-02-01", 28}, {"2022-02-02", 32}, {"2022-02-03", 29}, {"2022-02-04", 31},
        {"2022-03-01", 33}, {"2022-03-02", 34}, {"2022-03-03", 32}
    };
    
    auto jan = dataset | views::filter([](const auto& d) { return stoi(get<0>(d).substr(5,2)) ==1 ;});
    auto feb =dataset | views::filter([](const auto& d) { return stoi(get<0>(d).substr(5,2)) ==2; });
    auto march =dataset | views::filter([](const auto& d) { return stoi(get<0>(d).substr(5,2)) ==3 ;});
    
    auto jan_temp =jan |views::transform([](auto j){return get<1> (j);});
    auto feb_temp =feb |views::transform([](auto f){return get<1> (f);});
    auto march_temp =march |views::transform([](auto m){return get<1> (m);});

    vector<int> result(begin(jan_temp),end(jan_temp));
    vector<int> result2(begin(feb_temp),end(feb_temp));
    vector<int> result3(begin(march_temp),end(march_temp));
    
    auto jan_avg =accumulate(result.begin(),result.end(),0.0)/result.size();
    auto feb_avg =accumulate(result2.begin(),result2.end(),0.0)/result2.size();
    auto march_avg =accumulate(result3.begin(),result3.end(),0.0)/result3.size();
    
    cout<<"jan average temp "<<jan_avg<<endl;
    cout<<"feb average temp "<<feb_avg<<endl;
    cout<<"march average temp "<<march_avg<<endl;
    
    string highest_avg=jan_avg>feb_avg?(jan_avg>march_avg?"january":"march"):(feb_avg>march_avg?"febuary":"march");
    cout<<"month with highest average "<<highest_avg <<endl; 
    
    int count1 =0;
    int count2 =0;
    for(auto it:result){
        if(it>30){
            count1++;
        }
        else{
            break;
        }
    }
  count2= count1>count2?count1:count2;
  count1=0;
    
    for(auto it:result2){
        if(it>30){
            count1++;
        }
        else{
            break;
        }
    }
    count2= count1>count2?count1:count2;
    count1=0;
    
    for(auto it:result3){
        if(it>30){
            count1++;
        }
        else{
            break;
        }
    }
    count2= count1>count2?count1:count2;
    cout<<"longest consequtive above threshold "<<count2;
}