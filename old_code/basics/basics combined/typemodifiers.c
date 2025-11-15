#include <stdio.h>

int main (){
    signed int a = -10;   // same as int a = 10;
    unsigned int b = 20;   // can only be 0 or positive no negative values.

    short int c = 32000;      // a smaller integer
    long int d = 1234567890L; // A larger integer 

    unsigned char e = 200;   // character storing values 0 to 255

    // char f = 200 // potentially problematic, if char is signed, 200 is out of range (-128 to 127)

    long long int g = 9876543210987654321LL; // a even larget integer

    printf("signed int a: %d\n", a);
    printf("unsigned int b: %u\n", b); // %u is for unsigned int
    printf("short int c: %hd\n", c);   // %hd is for short int
    printf("long int d: %ld\n", d);    // %ld is for long int
    printf("unsigned char e: %u\n", e); // Print char as unsigned int for its value
    printf("long long int g: %lld\n", g); // %lld is for long long int

    // Practical use case: storing flags or small byte values
    unsigned char flags = 0xFF; // Max value for an unsigned char (255 in decimal)
    printf("Flags: %u\n", flags);

    return 0;

}