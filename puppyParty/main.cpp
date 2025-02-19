//puppy party

#include <iostream>
#include <string>
#include "header.h"

int main(){
    //dog 1
    dog dog1;
    dog1.name = "buddy";
    dog1.age = 4;
    //dog 2
    dog dog2;
    dog2.name = "daisy";
    dog2.age = 2;
    
    std::cout << dog2.supername() << std::endl;
}