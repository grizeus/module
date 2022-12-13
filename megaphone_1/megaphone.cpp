#include <string.h>
#include <iostream>

int main (int argc, char *argv[]) {
    std::string us_input;
    char ch;
    
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    std::string output;
    for (int i = 1; i < argc; i++) {
        std::string us_input(argv[i]);
        for (int j = 0; j < us_input.size(); j++) {
            // convert str[i] to uppercase
            ch = toupper(us_input[j]);
            output += ch;
        }
    }
    std::cout << output << std::endl;
    return 0;
}