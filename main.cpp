#include <iostream>
#include <cstdlib>

using namespace std;

// Random number generator
int main()
{
    srand(569876);       // Seed the random number generator
    int number = rand(); // Generate a random number
    cout << number;      // Output the random number
    return 0;            // End the program
}
