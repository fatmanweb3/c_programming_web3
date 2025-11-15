#include <stdio.h>

const float PI = 3.14;


int main(){
    printf("the value of PI is 3.14: %f\n", PI);

    int value = 50;
    int other_value = 75;

    const int *ptr_to_const;

    ptr_to_const = &value;

    printf(" the value is : %d\n", *ptr_to_const);

    ptr_to_const = &other_value;
    printf(" the value is : %d\n", *ptr_to_const);
    
    int *const const_ptr = &value;


    printf(" the value of the const_ptr is :%d\n", *const_ptr);

    *const_ptr = 99;
    
    printf(" the value of the const_ptr is :%d\n", *const_ptr);

    return 0;
}