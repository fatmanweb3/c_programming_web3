#include <Stdio.h>
#include <stdlib.h>


size_t string_count(const char *str)
{
    const char *temp = str;

    while (*temp != '\0')
    {
        temp++;
    }

    return temp - str;
    
}


int main (void)
{
    char word[100];

    printf("type the word to count the length: ");
    scanf("%99[^\n]", word);


    size_t length = string_count(word);
    printf("\n");
    printf("The length of the word is = %zu", length);

    return 0;
}