#include <stdio.h>

int isEven(int num){

    if ( num % 2 == 0 ){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    int number;

    printf("enter an integer number: ");

    scanf("%d", &number);

    if ( isEven(number)){
        printf(" %d is an even numbe. \n", number);
    }

    else
    {
        printf("%d is an odd number. \n", number);
    }

    return 0;
}