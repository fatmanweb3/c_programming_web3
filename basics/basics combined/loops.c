
#include <stdio.h>

int main() {
    // Loop to print numbers from 1 to 5
   for ( int i = 1; i <= 5; i++){
    printf("%d\n");
   }
    /*
    Output:
    1
    2
    3
    4
    5
    */

    printf("\n");

    // Loop to count down from 5 to 1
    for (int j = 5; j > 0; j--) {
        printf("%d ", j);
    }
    printf("\n"); // Output: 5 4 3 2 1


    int k = 1;

    while ( k <= 5){
        printf("%d \n", k);
        k++;
    }

    // Another example: Summing numbers until a sentinel value is entered
    int sum = 0;
    int input_num;

    printf("Enter numbers to sum (enter 0 to stop):\n");
    scanf("%d", &input_num); // Read first input

    while (input_num != 0) { // Condition: loop as long as input is not 0
        sum += input_num;    // Add input to sum
        scanf("%d", &input_num); // Read next input for the next iteration
    }

    printf("Total sum: %d\n", sum);


    return 0;
}