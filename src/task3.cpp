#include <iostream>
#include "task3.hpp"

using namespace std;

BaseConverter::BaseConverter() {
    while (1) {
        cout << "Enter the degrees Celsius: ";
        if ((cin >> celsius).good()) {
            break;
        }
        cin.clear();
        cin.ignore();
        cerr << "Invalid input!\n";
    }
}
double BaseConverter::convert() noexcept {
    while (true) {
        cout << "Select the scale for conversion ( 0 - Kelvin / 1 - Fahrenheit ): ";
        if ((cin >> scale_id).fail()) {
            cin.clear();
            cin.ignore();
            scale_id = __INT_MAX__;
        }
        switch (scale_id) {
        case 0:
            result = (celsius + 273.15);
            label = 'K';
            return result;
        case 1:
            result = (celsius * 1.8 + 32);
            label = 'F';
            return result;
        default:
            cerr << "Invalid input!\n";
        }
    }
}
void BaseConverter::printResult() noexcept {
    cout << "Conversion result: " << result << " °" << label << "\n";
}