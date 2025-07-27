#include <stdio.h>

void myFunction() {
    auto int x = 10; // 'auto' is optional here, it's the default
    int y;           // This is also 'auto' by default
    printf("Inside myFunction:\n");
    printf("x = %d\n", x);
    printf("y = %d (will be garbage if not initialized)\n", y); // y will contain garbage
}

int main() {
    myFunction();
    // printf("%d", x); // ERROR: 'x' is out of scope here
    return 0;
}