#include <stdio.h>

int main() {
  // Given values
    size_t x = 0x89ABCDEF;
    size_t y = 0x76543210;
  // Mask to truncate values
    size_t m = 0xff;
  // Performing operation to get required bytes
    size_t answer = (x & m) | (y & ~m);

  // Test case
    printf("\nThe result for %p and %p is: %p\n", x, y, answer);
}