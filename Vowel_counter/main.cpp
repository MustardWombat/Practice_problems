#include <iostream>
#include <string>
class VowelCounter;
class VowelCounter {
private:
    int vowel_count{0};  // Initialize the vowel count
    bool verbose;

public:
    VowelCounter(bool talkative = false);
    void add_string(std::string const &);
    int get_count() const;  // Add a getter function
};

VowelCounter::VowelCounter(bool talkative) : verbose(talkative) {
    if (verbose) {
        std::cout << "Verbose mode is on!" << std::endl;
    }
}

void VowelCounter::add_string(std::string const &text) {
    for (char c : text) {
        switch (c) {
            case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
            case 'A': case 'E': case 'I': case 'O': case 'U': case 'Y': // Include uppercase vowels
                if (verbose) {
                    std::cout << "Found Vowel -> " << c << std::endl;
                }
                ++vowel_count;
                break;
        }
    }
}

int VowelCounter::get_count() const {
    return vowel_count;
}

int main() {
    VowelCounter vc(true);
    std::string line;
    while (std::getline(std::cin, line)) {
        std::cout << "line = " << line << std::endl;
        vc.add_string(line);
    }
    std::cout << "vowel count is " << vc.get_count() << std::endl;
}
