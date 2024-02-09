#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    int arrsize1, arrsize2, min, max, x, y;
    cout << "Enter array size 1 and 2 (format: 1 2): ";
    cin >> x >> y;
    
    arrsize1 = x < y ? x : y;
    arrsize2 = x < y ? y : x;
    min = arrsize1 < arrsize2 ? arrsize1 : arrsize2;
    max = arrsize1 > arrsize2 ? arrsize1 : arrsize2;
    
    int arr[arrsize1], arr2[arrsize2], arr3[arrsize1 + arrsize2];
    
    srand(static_cast<unsigned int>(time(0)));
    
    cout << "Array 1: ";
    for (int i = 0; i < arrsize1; i++) {
        arr[i] = rand() % 9;
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Array 2: ";
    for (int i = 0; i < arrsize2; i++) {
        arr2[i] = rand() % 9;
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    sort(arr2, arr2 + arrsize2);
    sort(arr, arr + arrsize1);

    int counter = 0, counter2 = 0, counter3 = 0;
    
    while (counter < min) {
        if (arr2[counter2] > arr[counter]) {
            arr3[counter3] = arr[counter];
            counter += 1;
            counter3 += 1;
        }
        if (arr2[counter2] < arr[counter]) {
            arr3[counter3] = arr2[counter2];
            counter2 += 1;
            counter3 += 1;
        }
    
        if (arr2[counter2] == arr[counter]) {
            arr3[counter3] = arr[counter];
            arr3[counter3 + 1] = arr2[counter2];
            counter2 += 1;
            counter += 1;
            counter3 += 2;
        }
    }
    
    while (counter < arrsize1) {
        arr3[counter3] = arr[counter];
        counter3++;
        counter++;
    }
        
    while (counter2 < arrsize2) {
        arr3[counter3] = arr2[counter2];
        counter3++;
        counter2++;
    }
    
    cout << "Merged and sorted array: ";
    for (int i = 0; i < arrsize1 + arrsize2; i++) {
        cout << arr3[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
