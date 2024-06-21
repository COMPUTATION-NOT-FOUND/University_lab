#include<iostream>
#include<vector>
#include<ranges>
#include<algorithm>
using namespace std;

int main() {
    int x=1;
    int y=4;
    cout<<"enter x and y ";
    cin>>x>>y;
    int step=2;
    auto range=views::iota(x,y);
    auto step_range = range | views::transform([step](int value) { return value + step; });
    for(auto it:step_range){
        cout<<it<<" ";
    }

}
