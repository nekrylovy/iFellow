#include <iostream>
#include <iomanip>
#include "task1.hpp"
#include "task2.hpp"
#include "task3.hpp"
#include "task4.hpp"

using namespace std;

int main(void) {
    cout << "Task #1" << endl;
    try  {
        RandomArray array;
        array.printValues();
    }
    catch (const char *errorMsg) {
        cout << errorMsg << "\n";
    }
    cout << endl;

    cout << "Task #2" << endl;
    char word[]{"Hello"};
    try {
        cout << "Repetitive character: " << find_repeat_char(word) << "\n";
    }
    catch (const char *errorMsg) {
        cout << errorMsg << "\n";
    }
    cout << endl;

    cout << "Task #3" << endl;
    BaseConverter converter;
    converter.convert();
    converter.printResult();
    cout << endl;

    cout << "Task #4" << endl;
    int hours{12}, minutes{15};
    double angle;
    try {
        angle = calcAngle(hours, minutes);
        cout << "Time: " << hours << ":" << setfill('0') << setw(2) << minutes << "\n";
        cout << "Angle: " << angle << "°\n";
    }
    catch (const char *errorMsg) {
        cout << errorMsg << "\n";
    }

    return 0;
}