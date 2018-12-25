/**
 * Basic State Machine
 */

#include <iostream>

int main (void) {
    int iter = 0;
    char command = '\0';

    while (iter != -1) {
        std::cout << "Please enter 'q' if you want quit." << std::endl;
        std::cin >> command;

        if (command == 'q') {
            iter = -1;
        }
    }

    return 0;
}