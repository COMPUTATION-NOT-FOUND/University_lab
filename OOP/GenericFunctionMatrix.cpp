#include <iostream>
#include <vector>

using namespace std;

template <typename T, typename BinaryOperation>
vector<vector<T>> matrix_operation(const vector<vector<T>>& matrix1,
const vector<vector<T>>& matrix2,size_t rows, size_t cols,BinaryOperation op) {

vector<vector<T>> result(rows,vector<T>(cols));
for (size_t i = 0; i < rows; i++)
{
    for (size_t j = 0; j < cols; j++)
    {
       result[i][j]=op(matrix1[i][j],matrix2[i][j]);
    }
    
}

return result;


}


template<typename T>
auto add = [](const T& a, const T& b) { return a + b; };

template<typename T>
auto sub = [](const T& a, const T& b) { return a * b; };


template<typename T>
auto multiply = [](const T& a, const T& b) { return a * b; };

template<typename T>
void print(vector<vector<T>> m){

for(auto row:m){
    for(auto item:row){
        cout<<item<<" ";
    }
    cout<<endl;
}
cout<<endl;
}

int main(){
vector<vector<int>> a={{1,2}
                    ,{3,4}};
vector<vector<int>> b={{1,0}
                    ,{0,1}};


auto result = matrix_operation(a, b, 2, 2, add<int>);

print(result);
auto result2 =matrix_operation(a,b,2,2,multiply<int>);
print(result2);


}