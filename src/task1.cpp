#include <iostream>
#include "task1.hpp"

using namespace std;

double RandomArray::f_rand() noexcept {
    auto res = (float)rand() / RAND_MAX;
    return F_MIN + res * (F_MAX - F_MIN);
}
RandomArray::RandomArray() {
    while (1) {
        cout << "Enter array size: ";
        if ((cin >> arrSize).good()) {
            if (arrSize < 0) {
            cerr << "Size cannot be less than zero\n";
            } else {
                break;
            }
        }
        cin.clear();
        cin.ignore();
        cerr << "Invalid input!\n";
    }
    array = new double[arrSize];
    if (!array) {
        throw "Allocation error";
    }
    srand(time(NULL));
    for (int i = 0; i < arrSize; i++) {
        array[i] = f_rand();
        if (!i) {
            min = array[i];
            max = array[i];
        }
        if (min > array[i]) {
            min = array[i];
        }
        if (max < array[i]) {
            max = array[i];
        }
        sum += array[i];
    }
    sum /= arrSize;
}
void RandomArray::printValues() {
    cout.setf(ios::fixed);
    cout << "Minimum element:             " << min << "\n";
    cout << "Maximum element:             " << max << "\n";
    cout << "Arithmetic mean of elements: " << sum << endl;
    cout.unsetf(ios::fixed);
}
RandomArray::~RandomArray() {
    delete[] array;
}
