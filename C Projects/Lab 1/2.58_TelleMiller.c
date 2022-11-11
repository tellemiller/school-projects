#include <stdio.h>

typedef unsigned char* byte_pointer;

int is_little_endian(int value) { // Function to check if program is little-endian by checking order of stored bytes
    byte_pointer p_value = (byte_pointer) &value;
    return p_value[0] == 0xff;
}

int main() {
    printf("\nThis machine is little endian: %d\n", is_little_endian(0xff)); // Prints returned value and calls function
    return 0; // Return to exit program
}