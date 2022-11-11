long decode2(long x, long y, long z) { // Given function statement
    long temp = y - z;
    return (temp * x) ^ (temp << 63 >> 63);
}