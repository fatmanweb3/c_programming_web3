#include <stdio.h>

#include <string.h>

int main(){

    // array test practices
    int array[5] = {1,2,3,4,5}; // declaration of array 

    int i;

    for( i = 0; i <5; i++){
        printf(" the values are: %d\n", array[i]); // declaring  a variable i for loops this i counts from 0-5. i'm assigning tha values to print the array
    }

    // Create a float array of size 3 and take input from the user for each element using scanf.
    // Then print the sum of all elements.
    float floatArray[3];
    float sumFloat = 0.0;

    printf(" enter 3 float values to strore ina rray \n");

    for( i = 0; i <3; i++){
        printf("enter the values for storing float %d : ", i+1);

        if ( scanf( "%f", &floatArray[i]) != 1){
            printf(" enter a valid float value \n");

            while (getchar() != '\n');
            i--;;
        }
        sumFloat += floatArray[i];
    }

    for( i = 0; i< 3; i++){
        printf("the values of float are: %.2f\n", floatArray[i]);
    }
    printf(" the sum of float array is %.2f", sumFloat);

    


    return 0;
}