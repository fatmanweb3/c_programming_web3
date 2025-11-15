#include <stdio.h>

int main(){

    int num = 10;
    int *ptr_num;
    ptr_num = &num; // here it points the address of the num , so now it store the address of where num is located.

    printf(" value of the num: %d", num); // prints the num 10 

    printf(" address of the num: %p\n", &num); //%p is for printing address

    printf(" values store in the ptr_num ( address of the num): %p\n", ptr_num); //outputs the address of that is stored

    printf("value at the address pointed to by ptr_num: %d\n", *ptr_num); // outputs the value itself instead of address this is dereferencing 

    int arr[] = {10,20,30,40,50};
    int *ptr_arr; // declaration of pointer

    ptr_arr = arr; // 'arr' (without brackets) is equivalent to '&arr[0]'
                   // So, ptr_arr now points to the first element of arr (value 10)

    printf("Value of arr[0]: %d\n", arr[0]); // Output: 10
    printf("Value pointed to by ptr_arr: %d\n", *ptr_arr); // Output: 10, why it outputs 10 is in default ptr_arr = arr is &arr[0] it hold the address of the 0 value

    // You can use pointer arithmetic to access other array elements
    // Adding 1 to a pointer moves it to the next element of its type
    printf("Value of arr[1] using pointer arithmetic: %d\n", *(ptr_arr + 1)); // Output: 20
    printf("Value of arr[2] using pointer arithmetic: %d\n", *(ptr_arr + 2)); // Output: 30

    // You can also move the pointer itself
    ptr_arr++; // Now ptr_arr points to arr[1] (value 20)
    printf("After ptr_arr++, value pointed to: %d\n", *ptr_arr); // Output: 20

    // Accessing array elements using pointer notation
    printf("Value of arr[0] using pointer notation: %d\n", *(arr + 0)); // Same as arr[0]
    printf("Value of arr[3] using pointer notation: %d\n", *(arr + 3)); // Same as arr[3] (40)

    return 0;
}