#include <iostream>
#include <cstdlib>
#include <ctime> // Get time originating on Jan 1 1970

using namespace std;

// Random number generator
int main()
{
    srand(time(0));               // Seed the random number generator with the current time
    int number = rand() % 10'000; // Generate a random number between 0 and 9999
    cout << number;               // Output the random number
    return 0;                     // End the program
}
