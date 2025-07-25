/* Write a function called birthday, which adds one to the age of a person. */


#include <stdio.h>

typedef struct {
  char * name;
  int age;
} person;

/* function declaration */

void birthday(person * p){
    p->age++; // This is the same..	
    p->name = "kavitha";
    //(*p).age++; // ... as this would be
}

int main() {
  person john;
  john.name = "John";
  john.age = 27;

  printf("%s is %d years old.\n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

  return 0;
}