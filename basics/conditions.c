#include <stdio.h>

void guessNumber(int guess)
{
    if (guess < 555)
    {
        printf(" your guess is low. \n");
    }
    else if (guess < 555)

    {
        printf("your guess  is higher: \n");
    }

    else 
    {
        printf("your guess is correct.");
    }
    
}

int main()
{
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}