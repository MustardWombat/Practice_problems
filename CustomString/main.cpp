#include <iostream>
#include <string>

struct Dog{
    public:
        std::string name;
        int age;
        int increase_age(){
            std::cout << "I have aged" << std::endl;
            age++;
        }
};

int main() {

    Dog Dog1;
    Dog1.name = "Buddy";
    Dog1.age = 3;

    std::cout << Dog1.age << std::endl;
    Dog1.increase_age();
    std::cout << Dog1.age << std::endl;

    return 0;
}