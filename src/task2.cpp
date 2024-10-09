#include <iostream>
#include "task2.hpp"

char find_repeat_char(char *str) {
    if (!str || !*str) {
        throw "NULL string";
    }
    for (int i = 0; str[i]; i++) {
        for (int j = 0; str[j]; j++) {
            if (i == j) continue;
            if (str[i] == str[j]) {
                return str[i];
            }
        }
    }
    throw "Repetitive characters not found";
}