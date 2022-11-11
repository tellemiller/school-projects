#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b) { // Function given in textbook
    // Error thrown if integer is negative
    if(i < 0) { 
        printf("ERROR - Given integer is negative\n");
        return x;
    }
    // Error thrown if integer is too large
    if(i > sizeof(unsigned)) {
        printf("ERROR - Given integer is too large.\n");
        return x;
    }
    
    // Replacing bytes defined in function arguments
    unsigned m = ((unsigned)0xff) << (i << 3);
    unsigned final = ((unsigned)b) << (i << 3);
    return (x & ~m) | final;
}

int main() {
    // Test cases
    printf("\n%p", replace_byte(0x12345678, 2, 0xAB));
    printf("\n%p", replace_byte(0x12345678, 0, 0xAB));
}