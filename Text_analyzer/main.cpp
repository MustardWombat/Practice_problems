/*
We're creating a program that analyzes text from a file
provides:
1. Total vowels count
2. Total consonants count
3. Total words count
4. Total lines count
5. Most frequently occurring word
6. Option for verbose mode
*/

#include "Text_analyzer.h"
#include <iostream>

int main() {
    // Call the test() function and store the result
    int output = test();
    std::cout << "Test returned: " << output << std::endl;
    return 0;
}
