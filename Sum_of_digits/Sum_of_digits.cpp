/*
We are creating a C++ program that takes an integer from the
user and calculates the sum of its digits.
You must use a loop to extract each digit and sum them up.

example:
Input: 245
Output: 11 (2 + 4 + 5)
*/

#include <iostream>
#include <string>
#include <cctype>

int calculate_sum(const std::string& user_number){
    int sum{0};
    for (char ch : user_number){
        if (!isdigit(ch)) {
            std::cerr << "Error 01" << std::endl;
            return -1;
        }
        sum += ch - '0';
    }
    return sum;
}

int main(){
    std::string user_number;
    //User input:
    std::cout << "Enter an integer: ";
    std::cin >> user_number;
    //Function to calculate sum
    int calculated_sum = calculate_sum(user_number);
    //Print result
    if (calculated_sum != -1){
    std::cout << calculated_sum << std::endl;
    }
    return 0;
}