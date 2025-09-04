#include <stdio.h>


int main() {
    unsigned int a = 12; // Binary: 0000 1100
    unsigned int b = 6;  // Binary: 0000 0110

    printf("a = %u (binary: 0000 1100)\n", a);
    printf("b = %u (binary: 0000 0110)\n\n", b);

    // Bitwise AND (&)
    printf("a & b = %u (binary: 0000 0100)\n", a & b); // Result: 4

    // Bitwise OR (|)
    printf("a | b = %u (binary: 0000 1110)\n", a | b); // Result: 14

    // Bitwise XOR (^)
    printf("a ^ b = %u (binary: 0000 1010)\n", a ^ b); // Result: 10

    // Bitwise NOT (~)
    // For unsigned int, it flips all bits. The result can be very large
    // because it will use all bits of the unsigned int.
    // For a 32-bit unsigned int, ~12 (0...00001100) becomes (1...11110011)
    printf("~a = %u (unsigned int one's complement)\n", ~a);

    // Left Shift (<<)
    printf("a << 1 = %u (binary: 0001 1000)\n", a << 1); // Result: 24 (12 * 2^1)
    printf("a << 2 = %u (binary: 0011 0000)\n", a << 2); // Result: 48 (12 * 2^2)

    // Right Shift (>>)
    printf("a >> 1 = %u (binary: 0000 0110)\n", a >> 1); // Result: 6 (12 / 2^1)
    printf("b >> 1 = %u (binary: 0000 0011)\n", b >> 1); // Result: 3 (6 / 2^1)

    // Example with signed integer (for ~ and >>, behavior can differ)
    int signed_val = 1; // Example for understanding signed behavior
    printf("\nSigned ~(-12) = %d\n", ~signed_val); // Usually (-(N+1)) -> ~(-12) is 11

    return 0;
}