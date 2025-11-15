#include <stdio.h>
#include <stdlib.h> // Necessary for malloc and free

int main() {
    // malloc function
    int *ptr; // A pointer that will hold the address of our allocated memory
    int n = 5;  // We want space for 5 integers

    // Allocate memory for 5 integers.
    // sizeof(int) tells us how many bytes one integer takes.
    // So, 5 * sizeof(int) is the total bytes needed for 5 integers.
    ptr = (int *) malloc(n * sizeof(int));

    // --- VERY IMPORTANT: Check if memory was successfully allocated! ---
    if (ptr == NULL) {
        printf("Oops! Memory allocation failed. Not enough space.\n");
        return 1; // Return 1 to signal an error
    }

    // Now, we can use the allocated memory as if it were an array.
    printf("Please enter 5 whole numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &ptr[i]); // We use ptr[i] just like an array element
    }

    printf("You entered these numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // --- CRUCIAL STEP: Free the memory when you're done with it! ---
    // This returns the memory back to the system so other programs can use it.
    free(ptr);
    ptr = NULL; // Good habit: Set the pointer to NULL after freeing to avoid problems.


    // calloc function.

    int *arr_ptr;
    int num_elements = 3;

    // Allocate memory for 3 integers. Each integer takes sizeof(int) bytes.
    // All 3 integers will be initialized to 0.
    arr_ptr = (int *) calloc(num_elements, sizeof(int));

    if (arr_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Values after calloc (should all be 0s):\n");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr_ptr[i]);
    }
    printf("\n"); // Expected Output: 0 0 0

    free(arr_ptr);

    int *arr;
    int initial_size = 2; // Start with space for 2 integers
    int new_size = 4;     // We want to expand to 4 integers

    arr = (int *) malloc(initial_size * sizeof(int));
    if (arr == NULL) return 1;

    arr[0] = 10;
    arr[1] = 20;

    printf("Original array (size %d):\n", initial_size);
    for (int i = 0; i < initial_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Output: 10 20

    // --- Reallocate to a larger size ---
    int *new_arr = (int *) realloc(arr, new_size * sizeof(int));

    // --- Check if reallocation was successful ---
    if (new_arr == NULL) {
        printf("Reallocation failed! Original memory still valid.\n");
        free(arr); // Free the *original* memory since realloc failed
        return 1;
    }

    // IMPORTANT: If realloc succeeded, 'new_arr' might point to a different location.
    // 'arr' (the old pointer) might now be invalid (it might have been freed by realloc).
    // So, update 'arr' to point to the potentially new, larger block.
    arr = new_arr;

    // Now we can use the newly available space
    arr[2] = 30;
    arr[3] = 40;

    printf("Reallocated array (size %d):\n", new_size);
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Output: 10 20 30 40

    free(arr); // Free the final allocated memory

    return 0;
}