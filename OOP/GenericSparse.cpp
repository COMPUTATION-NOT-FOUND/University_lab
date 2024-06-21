#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class SparseMatrix {
private:
    int rows;
    int cols;
    vector<vector<T>> data;

public:
    SparseMatrix(int rows, int cols) : 
    rows(rows), cols(cols), data(rows, vector<T>(cols, T())) {}
    SparseMatrix(int rows, int cols, const vector<vector<T>>& nonZeroElements) : 
    rows(rows), cols(cols), data(nonZeroElements) {}

    SparseMatrix<T> operator+(const SparseMatrix<T>& other) const {
        if (rows != other.rows || cols != other.cols) {
            exit(0);
        }
        
        SparseMatrix<T> result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    SparseMatrix<T> operator-(const SparseMatrix<T>& other) const {
        if (rows != other.rows || cols != other.cols) {
            exit(0);
        }

        SparseMatrix<T> result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    
    SparseMatrix<T> operator*(const SparseMatrix<T>& other) const {
        if (cols != other.rows) {
            exit(0);
        }

        SparseMatrix<T> result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }


    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(){

    SparseMatrix<int> A(2, 2, {{1, 0}, 
                               {0, 1}});
    SparseMatrix<int> B(2, 2, {{2, 0},
                               {0, 2}});

    SparseMatrix<int> C = A + B;
    cout << "A + B:" << endl;
    C.print();
    cout << endl;

    SparseMatrix<int> D = A - B;
    cout << "A - B:" << endl;
    D.print();
    cout << endl;

    SparseMatrix<int> E = A * B;
    cout << "A * B:" << endl;
    E.print();

    return 0;


}
