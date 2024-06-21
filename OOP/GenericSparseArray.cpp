#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class sparsematrix {
    int rows;
    int columns;
    vector<vector<T>> matrix;

public:
    sparsematrix(int r, int c): rows(r), columns(c), matrix(r, vector<T>(c, T())) {}
    sparsematrix(int r, int c, vector<vector<T>> M): rows(r), columns(c), matrix(M) {}





    sparsematrix<T> operator +(const sparsematrix<T>& other) {
        if (rows != other.rows && columns != other.columns) {
            exit(0);
        }

        sparsematrix<T> temp(rows, columns);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                temp.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return temp;
    }





    sparsematrix<T> operator -(const sparsematrix<T>& other) {
        if (rows != other.rows && columns != other.columns) {
            exit(0);
        }

        sparsematrix<T> temp(rows, columns);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                temp.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
            }
        }
        return temp;
    }






    sparsematrix<T> operator *(const sparsematrix<T>& other) {
        if (columns != other.rows) {
            exit(0);
        }
        sparsematrix<T> temp(rows, columns);

        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < other.columns; j++) {

                for (int k = 0; k < rows; k++) {

                    temp.matrix[i][j] += matrix[i][k] * other.matrix[k][j];

                }
            }
        }
        return temp;
    }



    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout<< endl;
    }
};

int main(){
    sparsematrix<int> a(2,2,{{1,2}
                         ,{3,4}});
    sparsematrix<int> b(2,2,{{1,0}
                         ,{0,1}});

sparsematrix<int> Result= a+b;
Result.print();
Result= a-b;
Result.print();
Result= a*b;
Result.print();



}