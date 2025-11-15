#include <stdio.h>

int main(){

    // Set up two unsigned char variables
    unsigned char byte1 = 0b00111100; // Decimal 60
    unsigned char byte2 = 0b10101010; // Decimal 170

    // Print the decimal and binary representations for clarity
    printf("byte1 (decimal): %d, (binary): ", byte1);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (byte1 >> i) & 1);
    }
    printf("\n");

    printf("byte2 (decimal): %d, (binary): ", byte2);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (byte2 >> i) & 1);
    }
    printf("\n\n");

    // byte1 & byte2 (Bitwise AND)
    unsigned char result_and = byte1 & byte2;
    printf("byte1 & byte2:\n");
    printf("  Decimal: %d\n", result_and);
    printf("  Binary:  ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result_and >> i) & 1);
    }
    printf("\n\n");

    // byte1 | byte2 (Bitwise OR)
    unsigned char result_or = byte1 | byte2;
    printf("byte1 | byte2:\n");
    printf("  Decimal: %d\n", result_or);
    printf("  Binary:  ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result_or >> i) & 1);
    }
    printf("\n\n");

    // byte1 ^ byte2 (Bitwise XOR)
    unsigned char result_xor = byte1 ^ byte2;
    printf("byte1 ^ byte2:\n");
    printf("  Decimal: %d\n", result_xor);
    printf("  Binary:  ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result_xor >> i) & 1);
    }
    printf("\n\n");

    // ~byte1 (Bitwise NOT/One's Complement)
    // For an unsigned char, it flips all bits.
    // If byte1 is 00111100, ~byte1 will be 11000011.
    // In decimal, this is 128 + 64 + 2 + 1 = 195.
    // The "oddness" comes from the fact that it's just flipping bits within the 8-bit unsigned range.
    unsigned char result_not = ~byte1;
    printf("~byte1:\n");
    printf("  Decimal: %d\n", result_not);
    printf("  Binary:  ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result_not >> i) & 1);
    }
    printf("\n");
    printf("  Explanation: For an unsigned char, ~byte1 performs a bitwise NOT, flipping all 8 bits.\n");
    printf("  Since it's unsigned, there's no sign bit, so 0b00111100 becomes 0b11000011, which is 195 in decimal.\n\n");


    // byte1 << 2 (Left Shift)
    // Shifts bits of byte1 two positions to the left, filling with zeros on the right.
    // 00111100 << 2 becomes 11110000
    unsigned char result_left_shift = byte1 << 2;
    printf("byte1 << 2:\n");
    printf("  Decimal: %d\n", result_left_shift);
    printf("  Binary:  ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result_left_shift >> i) & 1);
    }
    printf("\n\n");

    // byte2 >> 1 (Right Shift)
    // Shifts bits of byte2 one position to the right. For unsigned types, fills with zeros on the left.
    // 10101010 >> 1 becomes 01010101
    unsigned char result_right_shift = byte2 >> 1;
    printf("byte2 >> 1:\n");
    printf("  Decimal: %d\n", result_right_shift);
    printf("  Binary:  ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result_right_shift >> i) & 1);
    }
    printf("\n\n");

    // Challenge: Check if the 3rd bit (0-indexed) of an integer n is set.
    int n = 77; // Example integer (binary: 01001101)
                // 3rd bit (0-indexed) is 0
    // int n = 78; // Example integer (binary: 01001110)
                 // 3rd bit (0-indexed) is 1

    printf("Challenge: Check if the 3rd bit of integer %d is set.\n", n);

    // Create a mask with the 3rd bit set (00001000 in binary, which is 8 in decimal)
    int mask = 1 << 3; // Equivalent to 0b00001000 or 8

    if ((n & mask) != 0) {
        printf("  The 3rd bit of %d is SET (1).\n", n);
    } else {
        printf("  The 3rd bit of %d is NOT SET (0).\n", n);
    }

    return 0;
}