#include <stdio.h>



int main()
{
    int x = 5, y = 10;
    int *p = &x;
    p = &y;
    printf("%d", *p);


}