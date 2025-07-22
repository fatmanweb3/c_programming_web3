/* Calculate the factorial (multiplication of all items array[0] to array[9], inclusive), of the variable array. */

#include <stdio.h>

#include <string.h>

int main(){
    int array[10] = { 1,2,3,4,5,6,7,8,9,10};
    int mul = 1;
    int i;

    for(i = 0; i<10; i++){
        mul *= array[i];
    }

    printf("mul of the array is %d\n", mul);
    return 0;

}