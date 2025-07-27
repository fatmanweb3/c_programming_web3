#include <stdio.h>


char message[6] = { 'h','e','l','l','o','\0'}; // definitely need to include null terminator.

char greeting[] = "hello"; // here compiler adutomatically adds null terminator \0, so now it adds \0 and the array size is [6]

char city[10] ="coimbatore"; // Size 10 is enough (9 chars + 1 for '\0').
                             // If "Coimbatore" was longer than 9 chars, it would be a buffer overflow.


int main (){

    printf(" greeting: %s\n", greeting);// prints hello
    printf(" the city name is: %s\n", city); 

    char name[20]; // defining a char-datatype  with name-arrayname with [20] as size.
    printf("enter your name: ");
    scanf("%s", name); // reads a single word
    printf("hello, %s!\n", name);

    char full_name[50];
    printf("Enter your full name: ");
    // fgets(buffer, size, stdin)
    fgets(full_name, sizeof(full_name), stdin); // Reads up to 49 chars + '\0'
                                                // Reads until newline or size-1 characters
    printf("Your full name is: %s", full_name);
    // Note: fgets often includes the newline character '\n' if the user presses Enter.
    // You might need to remove it if you don't want it.

    return 0;
}