#include <iostream>

int main(int argc, char* argv[]) {
    if(argc < 2) {
        std::cout << "Please provide a sequence." << std::endl;
        return -1;
    }

    int aCount = 0;
    int cCount = 0;
    int gCount = 0;
    int tCount = 0;

    for (int i = 0; i < strlen(argv[1]); i++) {
        if (argv[1][i] == 'A') {
            aCount++;
        }
        if (argv[1][i] == 'C') {
            cCount++;
        }
        if (argv[1][i] == 'G') {
            gCount++;
        }
        if (argv[1][i] == 'T') {
            tCount++;
        }
    }

    std::cout << aCount << " ";
    std::cout << cCount << " ";
    std::cout << gCount << " ";
    std::cout << tCount << " " << std::endl;
    
    return 0;
}