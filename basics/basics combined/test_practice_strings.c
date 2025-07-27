#include <stdio.h>

#include<string.h>

#include<stdlib.h>

int main(){
    // string test practices

    char fav_word[] = " siva is eternal"; 

    printf(" your favourite word is : %s\n", fav_word);

    char fullname[100];
    printf("enter your full anme: \n");
    fgets(fullname, sizeof(fullname), stdin);

    fullname[strcspn(fullname, "n")] = 0;

    printf("Your name: %s\n", fullname);
    printf("Length of your name: %zu\n\n", strlen(fullname)); // %zu is for size_t, the return type of strlen

    // Create two string variables (char arrays). Use strcpy to copy one to another,
    // and strcat to join them. Print the results.
    char string1[50] = "Hello";
    char string2[50] = "World";
    char destinationString[100]; // Make sure destination has enough space

    // strcpy: Copies string2 to destinationString
    strcpy(destinationString, string2);
    printf("After strcpy (string2 to destinationString): %s\n", destinationString);

    // strcat: Appends string1 to destinationString
    // First, let's reset destinationString or ensure it has "World"
    strcpy(destinationString, "World"); // Ensure destination starts with "World" for concatenation // this is for further safety to ensure that the word is properly placed
    strcat(destinationString, string1); // Concatenate "Hello" to "World"
    printf("After strcat (string1 to destinationString, initially 'World'): %s\n\n", destinationString);

     // Compare two strings using strcmp and print whether they are equal or which one comes first alphabetically.
    char strA[] = "apple";
    char strB[] = "banana";
    char strC[] = "apple";

    int compareResult1 = strcmp(strA, strB); // Compare "apple" and "banana"
    int compareResult2 = strcmp(strA, strC); // Compare "apple" and "apple"
    int compareResult3 = strcmp(strB, strA); // Compare "banana" and "apple"

    printf("Comparing \"%s\" and \"%s\":\n", strA, strB);
    if (compareResult1 == 0) {
        printf("  Strings are equal.\n");
    } else if (compareResult1 < 0) {
        printf("  \"%s\" comes before \"%s\" alphabetically.\n", strA, strB);
    } else {
        printf("  \"%s\" comes after \"%s\" alphabetically.\n", strA, strB);
    }

    printf("Comparing \"%s\" and \"%s\":\n", strA, strC);
    if (compareResult2 == 0) {
        printf("  Strings are equal.\n");
    } else if (compareResult2 < 0) {
        printf("  \"%s\" comes before \"%s\" alphabetically.\n", strA, strC);
    } else {
        printf("  \"%s\" comes after \"%s\" alphabetically.\n", strA, strC);
    }

    printf("Comparing \"%s\" and \"%s\":\n", strB, strA);
    if (compareResult3 == 0) {
        printf("  Strings are equal.\n");
    } else if (compareResult3 < 0) {
        printf("  \"%s\" comes before \"%s\" alphabetically.\n", strB, strA);
    } else {
        printf("  \"%s\" comes after \"%s\" alphabetically.\n", strB, strA);
    }
    printf("\n");
}