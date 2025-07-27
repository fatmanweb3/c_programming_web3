#include <stdio.h>
#include <string.h>

int main(){
    char mystring[] = " C Programming" ;
    int len = strlen(mystring); // len will be 13

    printf(" length of the \"%s\"; %d\n", mystring, len);


    char source[] = "hello"; // defining a char with name source

    char destination[10];

    strcpy(destination, source); // copies the source and places in destination.
    printf(" copied string: %s \n", destination);

    char str1[20] = "hello";

    char st2[] = " world ";

    strcat(str1, st2); // str1 now contains " hello world"

    printf("concatenated string: %s \n", str1);

    char s1[] = "apple";
    char s2[] = "banana";
    char s3[] = "apple";

    if ( strcmp( s1, s2) < 0 ){
        printf("%s comes before %s\n", s1, s2);
    }

    if (strcmp(s1, s3) == 0 ){
        printf(" %s is equal to %s \n", s1, s2);
    }

    return 0;

}
