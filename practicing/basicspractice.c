#include <stdio.h>

int main(){
    printf("%c \n", '9'); // prints the integer
    printf("%d \n", 10 % 3); // prints the remainder
    printf("Hello\nAnd Welcome John\n"); // prints the string \n adds a new lien so the next output will print in new line
    char ch = 'A'; // defining a character 
    printf("%c \n", ch + 1); //  prints th next character B // how it prints b is performign arithmetic operations on a char make it consdier asic a is 65, 65 + is 66 in asic 66 is B
    printf("%f", 10);

    int a = 5; // defining a as integer 
    int b = 6; //d efining b as a integer 

    printf("\n %d", a+b); // defining teh arithmetic sum of a and b
    printf("\n 1 + 2 = %d", 1+ 2); // it doe s the arithmetic iperations and places  the 3 in %d and prints out.

    printf("\nPrints %s and %s", "on", "multiple lines"); // %s is string format specifier.

    printf("\nthis is a backslash: \\"); //prints teh backslash \

    printf("\nSize of double: %d", sizeof(int)); // prinmthe the size of the data type

    int num = 5; // defining a integer 
    {
        int num = 10; // defining a integer within a scoep with new values this new values will work within inside this scope
        printf("%d ", num); // prints that local value
    }
    printf("%d", num); // now prints that global value


    int integer = 5; // Declares an integer variable 'integer' and sets it to 5.
    float floating = 7.2; // Declares a float variable 'floating' and sets it to 7.2.
    printf("%f", integer + floating); // Adds integer (5) to float (7.2), result (12.2) becomes float due to promotion, then prints it as a float.
    
    
    char character = 130; // Declares 'character' and assigns integer 130; if 'char' is signed (common), 130 wraps around to -126.
    printf("%d", character); // Prints the integer value of 'character' (likely -126 on most systems, or 130 if 'char' is unsigned).


    //swapping integers
    int r = 5, t = 10;
    // Complete the code
    
    int temp = r;
    
    r = t;
    
    t= temp;
    
    printf("%d %d", r, t);

    // celsius to fahrenheit
	
	float celsius = 20.5;
	
	float fahrenheit = ( celsius * 9/5) + 32;
	
	printf("\n%f" , fahrenheit);

    // fahrenheit to celsius

    //float fahrenheit = 98.3;
    
    //float celsius = (fahrenheit - 32) * 5.0 / 9.0; 
    
    //printf("%f", celsius);

    int x = 5; // Declares an integer 'x' and initializes it to 5.
    float f = 3.4; // Declares a float 'f' and initializes it to 3.4.
    printf("\n%d\n%d", x, f); // Prints 'x' (5) correctly, then attempts to print 'f' (3.4) as an integer, leading to undefined/garbage output for 'f'.

    printf("\n");


    return 0; // Indicates successful program execution.
    


}