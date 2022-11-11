#include <stdio.h>

int bit_equals_one(int testBit) {
  return !!testBit;
}

int bit_equals_zero(int testBit) {
  return !testBit;
}

int least_sig_byte_equals_one(int testByte) {
  return !!(testByte & 0xff);
}

int most_sig_byte_equals_zero(int testByte) {
  return !!(~testByte & 0xFF);
}

int main() {
    int x = 25151; // Test int
    printf("\nAny bit of x equals one: %d", bit_equals_one(x)); // Bit expression for bit == 1
    printf("\nAny bit of x equals zero: %d", bit_equals_zero(x)); // Bit expression for bit == 0
    printf("\nAny bit in the least significant byte of x equals one: %d", least_sig_byte_equals_one(x)); // Bit expression for bit == 1 in least significant byte
    printf("\nAny bit in the least significant byte of x equals zero: %d", most_sig_byte_equals_zero(x)); // Bit expression for bit == 0 in most significant byte
}