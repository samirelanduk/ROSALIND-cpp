#include <iostream>

int main(int argc, char* argv[]) {
    if(argc < 2) {
        std::cout << "Please provide a sequence." << std::endl;
        return -1;
    }

    for (int i = strlen(argv[1]) - 1; i >= 0; i--) {
        if (argv[1][i] == 'T') {
            std::cout << 'A';
        }
        if (argv[1][i] == 'A') {
            std::cout << 'T';
        }
        if (argv[1][i] == 'C') {
            std::cout << 'G';
        }
        if (argv[1][i] == 'G') {
            std::cout << 'C';
        }
    }
    std::cout << '\n';
}