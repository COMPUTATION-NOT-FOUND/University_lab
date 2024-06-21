#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;
template<size_t size>
void performOperations(array<int,size>& arr,string op){
        if (op == "sort") {
           sort(arr.begin(), arr.end());
        } else if (op == "reverse") {
           reverse(arr.begin(), arr.end());
        } else if (op == "rotate") {
           rotate(arr.begin(), arr.begin() + 1, arr.end());
        } else if (op == "min_element") {
            auto min = min_element(arr.begin(), arr.end());
            cout << "Minimum element:" << *min << endl;
        } else if (op == "max_element") {
            auto max = max_element(arr.begin(), arr.end());
            cout << "Maximum element:" << *max << endl;
        } else if (op == "count") {
            int value;
            cout << "Enter value to count: ";
            cin >> value;
            int Count = count(arr.begin(), arr.end(), value);
            cout << "Count of " << value << ": " << Count << endl;
        } else if (op == "accumulate") {
            int sum = accumulate(arr.begin(), arr.end(), 0);
            cout << "Sum of all elements:" << sum << endl;
        } else {
            cout << "Invalid operation:" << op <<endl;
        }
  
}



int main(){
    array<int, 6> arr = {1,4,3,5,4,6};
    string operation = "sort";
    performOperations(arr, operation);
    for(auto & it:arr){
        cout<<it<<" ";
    }
   

}