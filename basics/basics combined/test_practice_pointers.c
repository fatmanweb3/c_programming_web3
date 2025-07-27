#include <stdio.h>

int main(){

    /*Declare an int variable x and an int pointer ptr_x.

    Store the address of x into ptr_x.

    Print the value of x using x itself, and then using *ptr_x.

    Print the address of x using &x, and then using ptr_x.

    Change the value of x using *ptr_x = 25;. Print x again to confirm the change.

    Declare an int array. Create an int pointer and make it point to the first element of the array. Use pointer arithmetic to access and print the 3rd element of the array.
    */

    int x = 10 ;
    int *ptr_x;
    ptr_x = &x;

    printf(" the value of x using direct x is : %d\n", x);
    printf(" the value of x using pointer is : %d\n", *ptr_x);
    printf(" the address of the x using &x %d, the address of x using ptr_x %d\n", &x, ptr_x );
    // Print the address of x using &x, and then using ptr_x.
    printf("Address of x using &x: %p\n", (void*)&x); // %p is for printing addresses, cast to void* is good practice
    printf("Address of x using ptr_x: %p\n\n", (void*)ptr_x);

    *ptr_x = 25;

    printf("the value of x afetr changing the value using pointer is: %d\n", x);

    int number[] = {1,2,3,4,5};

    int *ptr_num = number;

    int i;
    for(i = 0; i < 5; i++){
        printf(" the values int the array are %d\n", number[i]);
    }

    printf(" the 3rd element in the pointer is:%d \n", *(ptr_num + 2)); // now it points to the index of 2 in array 

    printf(" the 3rd element in the array is:%d\n", number[2]);

    return 0;
}