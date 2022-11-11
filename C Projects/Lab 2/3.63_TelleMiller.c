long switch_prob(long x, long n) { // Given function statement
    long result = x;
    switch(n) {
        case 60:
        case 62:
            result = 8 * x;
            break;
        case 63:
            result = x >> 3;
            break;
        case 64:
            x = 15 * x;
        case 65:
            x *= x;
        default:
            result = 75 + x;
    }
    return result;
}