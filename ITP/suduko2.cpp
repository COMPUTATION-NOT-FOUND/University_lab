#include <iostream>
#include<iomanip>
using namespace std;
int rows(int a,int b);
int column(int c,int d);
int box(int e, int f,int g);
int suduko[9][9]={5,3,0,0,7,0,0,0,0,
                  6,0,0,1,9,5,0,0,0,
                  0,9,8,0,0,0,0,6,0,
                  8,0,0,0,6,0,0,0,3,
                  4,0,0,8,0,3,0,0,1,
                  7,0,0,0,2,0,0,0,6,
                  0,6,0,0,0,0,0,0,0,
                  0,0,0,4,1,9,0,0,5,
                  0,0,0,0,8,0,0,7,9};

int main() {
    int n = 0, row = 0, col = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << suduko[i][j] << " ";
            if (j == 2 || j == 5 || j == 8)
                cout << "  ";
        }
        cout << endl;
        if (i == 2 || i == 5 || i == 8)
            cout << "  ";
    }

    cout << "What is the number row and column you wanted to start\n ";
    cin >> row >> col;
    cout << endl;
    cout << "What is the number you wanted to input\n";
    cin >> n;



        cout << "The value of row function is -------> " << rows(n, row) << endl;
    cout << "The value of column function is -------> " <<column(n, col) << endl;
    cout << "The value of box function is -------> " <<box(n, row, col) << endl;

        if (rows(n, row) == column(n, col) && column(n, col) == box(n, row, col) && box(n, row, col) == rows(n, row))
        {
            cout << "The number fits here ! \n";
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    cout << suduko[i][j] << " ";
                    if (j == 2 || j == 5 || j == 8)
                        cout << "  ";
                }
                cout << endl;
                if (i == 2 || i == 5 || i == 8)
                    cout << "  ";
            }
            cout << "What is the number of row and columns you wanted to start\n ";
            cin >> row >> col;
            cout << "What is the number wanted to input\n";
            cin >> n;
        }

        else
        {
            for (int i = 0; i < rows(n, row); i++) {
                cout << "Your number does not fit in here ! \n";
                cout << "What is the number of row and column you wanted to start\n ";
                cin >> n;
            }
        }
    
    return 0;
}


    int rows(int a, int b)
    {
        int sahi= 6;
        int galat=7;
        bool found = false;
        for (int i = 0; i < 9; i++)
        {
            int j = b;
            if (suduko[i][j] == a)
            {
                return galat;
            }
        }
        return sahi;
    }

    int column(int a, int b)
    {
        int sahi = 6;
        int galat = 7;
        for (int j = 0; j < 9; j++)
        {
            int i = b;

            if (suduko[i][j] == a)
            {
                return galat;
            }
        }

        return sahi;
    }

int box(int a, int g, int f) {
    int k = 0, sahi = 6, galat = 7;
    if x<=3 {
        k=3
    }
y<=3
l=3
    if (g <= 3 && f <= 3) {
        k = 3;
        l
        for (int i = k - 3; i < k; i++) {
            for (int j = l - 3; j < l; j++) {
                if (suduko[i][j] != a && suduko[i][j] == 0) {
                    suduko[i][j] = a;
                    return sahi;
                } else if (suduko[i][j] == a) {
                    return galat;
                }
            }
        }
    } else if (3 <= g && g <= 6 && 3 <= f && f <= 6) {
        k = 6;
        for (int i = k - 3; i < k; i++) {
            for (int j = k - 3; j < k; j++) {
                if (suduko[i][j] != a && suduko[i][j] == 0) {
                    suduko[i][j] = a;
                    return sahi;
                } else if (suduko[i][j] == a) {
                    return galat;
                }
            }
        }
    } else {
        k = 9;
        for (int i = k - 3; i < k; i++) {
            for (int j = k - 3; j < k; j++) {
                if (suduko[i][j] != a && suduko[i][j] == 0) {
                    suduko[i][j] = a;
                    return sahi;
                } else if (suduko[i][j] == a) {
                    return galat;
                }
            }
        }
    }
    return 0; // You may want to add a return statement outside of the loops.
}