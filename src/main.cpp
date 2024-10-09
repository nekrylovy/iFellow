#include <iostream>
#include "task1.hpp"

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
    return 0;
}