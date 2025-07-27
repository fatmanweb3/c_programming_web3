#include <stdio.h>  // Required for input/output functions like printf, scanf
#include <stdlib.h> // Required for dynamic memory allocation functions like malloc, free
#include <string.h>

int main() {
    int *arr;         // Pointer to hold the base address of the dynamically allocated array
    int num_elements; // Variable to store the number of elements the user wants

    // 1. Ask the user for the number of elements
    printf("Enter the number of integer elements you want in the array: ");
    // Read the integer input from the user
    scanf("%d", &num_elements);

    // Basic validation: Ensure the user enters a positive number
    if (num_elements <= 0) {
        printf("Number of elements must be positive. Exiting.\n");
        return 1; // Indicate an error
    }

    // 2. Use malloc to dynamically allocate memory for that number of integers
    //    num_elements * sizeof(int) calculates the total bytes needed.
    //    (int *) casts the void* returned by malloc to an int* pointer.
    arr = (int *) malloc(num_elements * sizeof(int));

    // 3. Check if malloc returned NULL (memory allocation failed)
    if (arr == NULL) {
        printf("Error: Memory allocation failed! Not enough available memory.\n");
        return 1; // Indicate an error and exit the program
    }

    printf("\nMemory successfully allocated for %d integers.\n", num_elements);

    // 4. Read values from the user into the dynamically allocated array
    printf("Please enter %d integer values:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        printf("Enter element %d: ", i + 1);
        // Use scanf to store the input directly into the i-th element of the array.
        // arr[i] is equivalent to *(arr + i).
        scanf("%d", &arr[i]);
    }

    // 5. Print the values in the array
    printf("\nValues stored in the array are:\n");
    for (int i = 0; i < num_elements; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    // 6. Free the allocated memory
    //    This is crucial to prevent memory leaks.
    free(arr);
    arr = NULL; // Good practice: set the pointer to NULL after freeing

    printf("\nMemory successfully freed.\n");


    char *str;           // Pointer to hold the base address of the dynamically allocated string
    int initial_size = 10; // Initial size for the string (e.g., to hold "Hello" + null terminator)
    int new_size = 20;   // New size for the string after reallocation

    // 1. Allocate initial memory for a char array (e.g., 10 characters) using malloc.
    //    We add 1 for the null terminator '\0'.
    str = (char *) malloc(initial_size * sizeof(char));

    // Check if malloc returned NULL (memory allocation failed)
    if (str == NULL) {
        printf("Error: Initial memory allocation failed!\n");
        return 1; // Indicate an error and exit
    }
    printf("Initial memory allocated for %d characters.\n", initial_size);

    // 2. Copy a short string into it (e.g., "Hello").
    //    strcpy is used to copy a string, including its null terminator.
    strcpy(str, "Hello");
    printf("Initial string: %s\n", str);

    // 3. Now, use realloc to expand the memory to hold a longer string (e.g., 20 characters).
    //    Store the result in a temporary pointer first, in case realloc fails.

    char *temp_str;

    temp_str = (char *) realloc(str, new_size * sizeof(char));

    // Check if realloc returned NULL (memory reallocation failed)
    if (temp_str == NULL) {
        printf("Error: Memory reallocation failed! Original memory still valid.\n");
        free(str); // Free the original memory block as realloc failed
        return 1;  // Indicate an error and exit
    }

    // If realloc succeeded, update the original pointer 'str' to point to the new block.
    // This is crucial because realloc might have moved the memory block.
    str = temp_str;
    printf("\nMemory successfully reallocated to %d characters.\n", new_size);

    // 4. Copy the longer string (e.g., "Hello C World!") into the reallocated memory.
    //    Ensure the new string fits within the new_size.
    //    strlen("Hello C World!") is 15, so 20 characters is enough (15 + 1 for null).
    strcpy(str, "Hello C World!");

    // 5. Print the string.
    printf("String after reallocation and new copy: %s\n", str);

    // 6. Free the allocated memory.
    //    This is crucial to prevent memory leaks.
    free(str);
    str = NULL; // Good practice: set the pointer to NULL after freeing

    printf("\nMemory successfully freed.\n");


    return 0; // Indicate successful program execution
}
