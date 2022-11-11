#include <stdio.h>

// Function given in textbook
// Return 1 when any odd bit of x equals 1; 0 otherwise. Assume w=32 
int any_odd_one(unsigned x) { 
    return !!(x & 0xaaaaaaaa); // Bit expression to check odd bits equality to 1
}

int main() {
    unsigned test = 0x5; // Test byte

    // Test cases
    printf("\n%d", any_odd_one(test));
    printf("\n%d", !any_odd_one(test));

    return 0; // Return to exit program
}