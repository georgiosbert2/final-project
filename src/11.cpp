#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL)); // seed the RNG with the current time
    int randomNumber = rand() % 10 + 1; // generate a random number between 1 and 10, inclusive
    std::cout << "Random number: " << randomNumber << std::endl;
    return 0;
}
