#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void performOperations(vector<string>& vec,string op){
        if (op == "sort") {
           sort(vec.begin(), vec.end());
        } else if (op == "reverse") {
           reverse(vec.begin(), vec.end());
        } else if (op == "rotate") {
           rotate(vec.begin(), vec.begin() + 1, vec.end());
        } else if (op == "min_element") {
            auto min = min_element(vec.begin(), vec.end());
            cout << "Minimum element:" << *min << endl;
        } else if (op == "max_element") {
            auto max = max_element(vec.begin(), vec.end());
            cout << "Maximum element:" << *max << endl;
        } else if (op == "count") {
            string value;
            cout << "Enter value to count: ";
            cin >> value;
            int Count = count(vec.begin(), vec.end(), value);
            cout << "Count of " << value << ": " << Count << endl;
        } else if (op == "accumulate") {
            // accumulate not applicable on strings
            // int sum = accumulate(vec.begin(), vec.end(), 0);
            // cout << "Sum of all elements:" << sum << endl;
        } else {
            cout << "Invalid operation:" << op <<endl;
        }
  
}

int main(){
    vector<string> vec= {"banana", "apple", "orange", "grape"};
    string operation = "sort";
    performOperations(vec, operation);
    for(auto & it:vec){
        cout<<it<<" ";
    }
    return 0;

}