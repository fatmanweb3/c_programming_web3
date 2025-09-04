#include <stdio.h>

int main(){

    //declaration.
    int age;        // declares integer 
    char initial;   // declares character varaiable
    float price;    // declares float varible name price.
    double pi_value; // declares a double variable  anme pi_value

    // declaration and initialization
    int count = 10;
    char grade = 'B';
    float temperature = 25.5665;
    double light_speed = 299792458.0;


    // printing the values that and initialized
    printf("Age: %d\n", count);
    printf("grade:%c \n", grade);
    printf("the temperature is %.2f \n", temperature); // %.1f for float, .1 means 1 decimal place
    printf("the speed of light is %lf");  // %lf is for double

    return 0;

}