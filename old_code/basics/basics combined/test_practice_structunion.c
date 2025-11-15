#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_number;
    float marks;
};

int main(){

    struct Student student1;
    strcpy(student1.name, "sudharsan\n");
    student1.roll_number = 55;
    student1.marks = 91.1;

    struct Student student2;

    printf("Enter details for Student 2:\n");
    printf("Enter Name: ");
    // fgets reads a line from stdin, including the newline character, and stores it in student2.name.
    // It's safer than scanf for strings as it prevents buffer overflows.
    fgets(student2.name, sizeof(student2.name), stdin);
    // Remove trailing newline character if present, as fgets includes it.
    // This is important for cleaner output, especially when printing.
    student2.name[strcspn(student2.name, "\n")] = 0; // strcspn finds the first occurrence of '\n'

    printf("Enter Roll Number: ");
    // scanf reads an integer. Note: scanf leaves the newline character in the input buffer.
    scanf("%d", &student2.roll_number);

    printf("Enter Marks: ");
    // scanf reads a float.
    scanf("%f", &student2.marks);

    // Consume the leftover newline character from the scanf buffer.
    // This is crucial before the next fgets call, otherwise fgets might read an empty string.
    while (getchar() != '\n');


    printf("\n--- Structure with Pointers ---\n");

    struct Student *student1_ptr;
    student1_ptr = &student1;

    student1_ptr -> marks = 69.9;

    printf(" the market of the student is: %.2f", student1_ptr->marks);
    printf(" the roll number of student is: %d", student1_ptr->roll_number);

    typedef struct Student Stu_t;

    Stu_t student3;
    strcpy(student3.name, "Charlie Brown\n");
    student3.roll_number = 103;
    student3.marks = 78.90;

    union Value
    {
        int integer_val;
        float float_val;
        char char_val;

    } my_union_val;

    my_union_val.integer_val = 123;
    printf(" stored integer: %d\n", my_union_val.integer_val);
    
    my_union_val.float_val = 55.5;
    printf("stored float: %f", my_union_val.float_val);// now after this line if i try to print integere iw ill get wrong values because now float is taking the memory space becuase it is a union.

    printf("Size of union Value: %zu bytes\n", sizeof(my_union_val));

    return 0;
    
}