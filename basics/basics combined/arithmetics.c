#include <stdio.h>

int main() {
    int num1 = 10, num2 = 3;
    float f_num1 = 10.0, f_num2 = 3.0;

    // Integer arithmetic
    printf("Integer Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Integer Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Integer Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Integer Division (truncates): %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Integer Modulo (remainder): %d %% %d = %d\n", num1, num2, num1 % num2); // %% to print a literal %

    printf("\n");

    // Floating-point arithmetic
    printf("Float Addition: %.1f + %.1f = %.1f\n", f_num1, f_num2, f_num1 + f_num2);
    printf("Float Division: %.1f / %.1f = %.2f\n", f_num1, f_num2, f_num1 / f_num2); // .2f for 2 decimal places

    return 0;
}