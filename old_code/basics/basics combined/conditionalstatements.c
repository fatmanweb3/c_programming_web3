#include <stdio.h>

int main(){

    // basic if statements
    int a = 10;
    if ( a >= 10){
        printf("you passed the exam! \n");
    }

    int temperature = 20;

    if (temperature < 0 ) {
        printf(" it's is freezing outside\n");
    }


    // basic if else statements.

    int num = 25;

    if (num < 18){

        printf(" you are not eligible!");
    }

    else {

        printf(" you are eligible! ");
    }


    // basic else if statements


    int grade_score = 85;

    char grade;

    if (grade_score >= 90) {
        grade = 'A';
    } else if (grade_score >= 80) {
        grade = 'B';
    } else if (grade_score >= 70) {
        grade = 'C';
    } else if (grade_score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Your grade is: %c\n", grade); // Output: Your grade is: B

    int k = 0;
    if (k > 0) {
        printf("Number is positive.\n");
    } else if (k < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n"); // Output: Number is zero.
    }

    // nested if else

    int age = 20;
    char has_license = 'Y'; // 'Y' for Yes, 'N' for No

    if (age >= 18) {
        printf("You are old enough to drive.\n");

        if (has_license == 'Y') {
            printf("You have a driving license. You can drive!\n");
        } else {
            printf("You are old enough, but you don't have a license yet.\n");
        }
    } else {
        printf("You are not old enough to drive.\n");
    }

    
    return 0; 
}