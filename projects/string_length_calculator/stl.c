// wrtie an fiunction to counter letter in string  using an pointer 


#include <stdio.h>
#include <stdlib.h>

size_t count_string(char *word)
{
    char *temp = word;

    while (*temp != '\0')
    {
        temp++;
    }
    
    return temp - word;

}


int main()
{
    char input[100];

    printf("enter a string: ");
    scanf("%99[^\n]", input);


    size_t len = count_string(input);
    printf("\n");
    printf("Length of string = %zu\n", len);
    return 0;

}