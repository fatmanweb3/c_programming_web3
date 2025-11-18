#include <stdio.h>
#include <stdlib.h>

void string_rev(char *str)
{
    char *left = str;
    char *right = str;

    while (*right != '\0')
    {
        right++;
    }
    right--;

    while(left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
    
}


int main()
{
    char input[100];

    printf("Type the string to be reversed : ");
    scanf("%99[^\n]", input);
    printf("\n");
    printf("String Before Reversal : %s\n", input);
    string_rev(input);
    printf("String After Reversal : %s\n", input);

    return 0;
}