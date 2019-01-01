/**
 * Basic State Machine
 */

#include <iostream>

int main (void) {
    int iter = 0;
    char command = '\0';

    while (iter != -1) {
        if (iter == 0) std::cout << "Started" << std::endl;
        iter++;
        std::cout << "Running";
        std::cout << " -- Please enter 'q' if you want quit." << std::endl;
        std::cin >> command;

        if (command == 'q') {
            iter = -1;
            std::cout << "Terminated" << std::endl;
        }
        std::cin.clear();
    }

    return 0;
}