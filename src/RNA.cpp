#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Please provide a sequence." << std::endl;
        return -1;
    }

    for (int i = 0; i < strlen(argv[1]); i++) {
        if (argv[1][i] == 'T') {
            std::cout << 'U';
        } else {
            std::cout << argv[1][i];
        }
    }
    std::cout << std::endl;


}