#include <stdio.h>

int main()
{
    int average;

    int grades[10];

    grades[0] = 80;
    
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;

    printf(" the average of the 3 grades is : %d", average);

    return 0;

}