/* 

The array variable consists of a sequence of ten numbers. Inside the while loop, you must write two if conditions, which change the flow of the loop in the following manner (without changing the printf command):

If the current number which is about to printed is less than 5, don't print it.
If the current number which is about to printed is greater than 10, don't print it and stop the loop.

*/

#include <stdio.h>

int main(){
    int array[10] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};

    int i = 0;

    while (i<10)
    {
        if(array[i] < 5){
            i++;
            continue;
        }

        if(array[i] > 10){
            break;
        }

        printf("%d\n", array[i]);
        i++;
    }
    

}