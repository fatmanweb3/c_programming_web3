#include <stdio.h>

void calculateSum() {
    register int sum = 0; // Hint to store 'sum' in a register
    register int i;       // Hint to store 'i' in a register

    for (i = 0; i < 1000000; i++) {
        sum += i;
    }
    printf("Sum (calculated with register variables): %d\n", sum);
    // int* ptr = &i; // ERROR: Cannot take address of a register variable
}

int main() {
    calculateSum();
    return 0;
}