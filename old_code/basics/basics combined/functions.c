#include <stdio.h>

// This function takes pointers to integers
void swap(int *ptr1, int *ptr2);

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y); // Output: x = 10, y = 20

    swap(&x, &y); // Pass the addresses of x and y using the address-of operator (&)

    printf("After swap: x = %d, y = %d\n", x, y);  // Output: x = 20, y = 10 (Originals are changed!)
    return 0;
}

void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;  // Store the value at ptr1's address
    *ptr1 = *ptr2; // Change the value at ptr1's address to value at ptr2's address
    *ptr2 = temp;  // Change the value at ptr2's address to the stored temp value
    printf("Inside swap: *ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);
}