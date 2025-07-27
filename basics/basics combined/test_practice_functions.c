#include <stdio.h>

float calculateArea(float length, float width){

    float area = length * width;

    return area;

}


void get_user_input(int *num1, int *num2) {
    // Create a local array of pointers to make looping over num1 and num2 possible.
    // This allows us to use a for loop for input collection.
    int *pointers_to_values[2];
    pointers_to_values[0] = num1; // The first element of this array points to num1's location
    pointers_to_values[1] = num2; // The second element points to num2's location

    // Loop twice to get input for both num1 and num2
    for (int i = 0; i < 2; i++) {
        printf("Enter number %d: ", i + 1);
        // Use scanf to store the input directly into the memory location
        // pointed to by the current pointer in our local array.
        scanf("%d", pointers_to_values[i]);
    }
}


int main(){
    float userLength; // Variable to store the length entered by the user
    float userWidth;  // Variable to store the width entered by the user
    float rectangleArea; // Variable to store the result returned by calculateArea

    // Prompt the user to enter the length
    printf("Enter the length of the rectangle: ");
    // Read the float value entered by the user and store it in userLength
    // The '&' symbol is used to pass the memory address of userLength to scanf,
    // so scanf can directly modify its value.
    scanf("%f", &userLength);

    // Prompt the user to enter the width
    printf("Enter the width of the rectangle: ");
    // Read the float value entered by the user and store it in userWidth
    scanf("%f", &userWidth);

    // Call the calculateArea function with the user-provided length and width.
    // The returned area is stored in the rectangleArea variable.
    rectangleArea = calculateArea(userLength, userWidth);

    // Print the calculated area to the console.
    // "%.2f" formats the float to display only two decimal places.
    printf("The area of the rectangle is: %.2f square units.\n", rectangleArea);

    int value1; // Declare the first integer variable
    int value2; // Declare the second integer variable

    printf("Before calling get_user_input:\n");
    printf("value1 = (uninitialized, likely garbage) \n"); // Value is undefined before input
    printf("value2 = (uninitialized, likely garbage) \n"); // Value is undefined before input

    // Call the get_user_input function.
    // We pass the ADDRESSES of value1 and value2 using the address-of operator (&).
    // This allows the function to modify the original variables.
    get_user_input(&value1, &value2);

    printf("\nAfter calling get_user_input:\n");
    // Print the values of value1 and value2 to verify they were changed by the function.
    printf("value1 is now: %d\n", value1);
    printf("value2 is now: %d\n", value2);

    return 0;

}