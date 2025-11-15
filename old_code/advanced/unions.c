



#include <stdio.h>

/* define the union here */

union Data 
{
    char chars[21];
    int ints[6];
};


int main() {

    union Data data; // One toy box
    
    // Set 6 integers (ASCII for A, B, C, D, E, F)
    data.ints[0] = 65; // A
    data.ints[1] = 66; // B
    data.ints[2] = 67; // C
    data.ints[3] = 68; // D
    data.ints[4] = 69; // E
    data.ints[5] = 70; // F
    
    printf("Chars: [");
    for (int i = 0; i < 20; i++) {
        printf("%c, ", data.chars[i]);
    }
    printf("%c]\n", data.chars[20]);

    // Add null terminator for string
    data.chars[21] = '\0'; // Safe for string printing (within 24 bytes)

    // Print chars as a string
    printf("String: %s\n", data.chars);
    return 0;

}