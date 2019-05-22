#include <iostream>
#include <stdio.h>
#include <string>
#include "bracketCalculator.h"
#include "spaceFixer.h"

int main() {
    char c;
    std::string str;
    do {
        str = "";
        while ((c = getchar()) != '\n' && c != EOF) {
            str += c;
        }
        std::cout << str; 
        std::cout << c;
    } while(c != EOF);
    return 0;
}
