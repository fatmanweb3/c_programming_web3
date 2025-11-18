#include  <stdio.h>
#include  <stdlib.h>

void swap_usual(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

void swap_xor(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap_add_sub(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}


int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("\n");
    printf("Before: x = %d, y = %d\n", x, y);
    
    // Test all 3 methods (uncomment one at a time)
    swap_usual(&x, &y);
    // swap_xor(&x, &y);
    // swap_add_sub(&x, &y);
    
    printf("After : x = %d, y = %d\n", x, y);

    printf("\n");
    printf("Before: x = %d, y = %d\n", x, y);
    
    // Test all 3 methods (uncomment one at a time)
    swap_xor(&x, &y);
    // swap_xor(&x, &y);
    // swap_add_sub(&x, &y);
    
    printf("After : x = %d, y = %d\n", x, y);

    printf("\n");
    printf("Before: x = %d, y = %d\n", x, y);
    
    // Test all 3 methods (uncomment one at a time)
    swap_add_sub(&x, &y);
    // swap_xor(&x, &y);
    // swap_add_sub(&x, &y);
    
    printf("After : x = %d, y = %d\n", x, y);
    
    return 0;
}