/* Use malloc to dynamically allocate a point structure. */

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
} point;

int main(){
    point * mypoint;

    mypoint = (point *) malloc(sizeof(point));

    mypoint->x = 10;
    mypoint->y = 5;

    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    free(mypoint);
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y); /* why this will not work is it cannot here after. get data because we free the dynamic memory.*/
    return 0;                                        
}




