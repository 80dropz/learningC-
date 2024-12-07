#include <iostream>
#include <random> // For random number generation

int main() {
    // Step 1: Create a random engine
    std::random_device rd;          // Get a seed from the hardware (or from a pseudo-random source)
    std::mt19937 gen(rd());         // Mersenne Twister engine

    // Step 2: Define a distribution (uniform distribution between 1 and 100)
    std::uniform_int_distribution<> dist(1, 100); // Generates numbers between 1 and 100

    // Step 3: Generate a random number
    int random_num = dist(gen);

    // Output the random number
    std::cout << "Random number between 1 and 100: " << random_num << std::endl;

    return 0;
}