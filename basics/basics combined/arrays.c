#include <stdio.h>

int main(){

    // datatype arrayname[size of the array]

    int number [5];
    float tempereature [10];
    char names[6];

    //initialization at declaration

    int scores[5] = {90, 85, 92, 78,95}; // here i set teh array size to 5 and declar 5 variables

    // partial declaration
    int data[5] = {1, 2};// data[0] = 1, data[1] = 2, data[3] = 0 , same until the size of the arrays.

    //omitting size
    int ages[] = { 55,25,35, 65}; // here i didn't mention the size of the array instead it automatically decides the size of the array.

    //initialization after declaration

    //data type arrayname[index ( the size )] = value;
    //value = arrayname[index]

    int num[3]; // declaration of array

    num[0] = 1; // index at 0  // initialization of array
    num[1] = 2; // index at 1
    num[2] = 3; // index at 2

    // print values

    printf("first element: %d \n", num[0]);
    printf("first element: %d \n", num[1]);
    printf("first element: %d \n", num[2]);

    int i;

    for( i = 0; i < 5; i++ ){
        printf("num[%d] = %d \n",i, num[i]); // here the loop runs for 5 times.

    }

    
    int average;

    int grades[10];

    grades[0] = 80;
    
    grades[2] = 90;

    average = ( grades[0] + grades[1] + grades[2]) / 3;

    printf(" the average of the 3 grades is : %d", average);

    return 0;

}