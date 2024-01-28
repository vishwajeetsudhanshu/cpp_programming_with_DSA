#include<iostream>

int main() {
    // Example of a for loop to print numbers from 1 to 5
    std::cout << "Using a for loop to print numbers from 1 to 5:" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Example of a while loop to print numbers from 1 to 5
    std::cout << "Using a while loop to print numbers from 1 to 5:" << std::endl;
    int j = 1;
    while (j <= 5) {
        std::cout << j << " ";
        ++j;
    }
    std::cout << std::endl;

    // Example of a do-while loop to print numbers from 1 to 5
    std::cout << "Using a do-while loop to print numbers from 1 to 5:" << std::endl;
    int k = 1;
    do {
        std::cout << k << " ";
        ++k;
    } while (k <= 5);
    std::cout << std::endl;

    return 0;
}
