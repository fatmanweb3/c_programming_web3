/* Define a new data structure, named "person", which contains a string (pointer to char) called name, and an integer called age. */


#include <stdio.h>

typedef struct 
{
    char * name;
    int age;
}person;

int main(){
    person john;

    john.name = "John";
    john.age = 23;
    printf("%s is %d years old ", john.name, john.age);

}

