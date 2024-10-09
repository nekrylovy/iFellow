#include <iostream>
#include "task1.hpp"
#include "task2.hpp"
#include "task3.hpp"

using namespace std;

int main(void) {
    // cout << "Task #1" << endl;
    // try  {
    //     RandomArray array;
    //     array.printValues();
    // }
    // catch (const char *errorMsg) {
    //     cout << errorMsg << "\n";
    // }
    // cout << endl;

    // cout << "Task #2" << endl;
    // char word[]{"Hello"};
    // try {
    //     cout << "Repetitive character: " << find_repeat_char(word) << "\n";
    // }
    // catch (const char *errorMsg) {
    //     cout << errorMsg << "\n";
    // }
    // cout << endl;

    cout << "Task #3" << endl;
    BaseConverter converter;
    converter.convert();
    converter.printResult();
    cout << endl;

    return 0;
}