/* Create a pointer to the local variable n called pointer_to_n, and use it to increase the value of n by one. */

#include <stdio.h>

int main()

{

    int n = 10;

    int * pointer_to_n = &n;

    *pointer_to_n += 1;

    if (pointer_to_n != &n) {
        printf("Error: The map (pointer_to_n) doesn't point to n's address!\n");
        return 1;
    }
    printf("Success: The map (pointer_to_n) points to n's address.\n");

    if (*pointer_to_n != 11) {
        printf("Error: The number on the ball is not 11!\n");
        return 1;
    }
    printf("Success: The number on the ball is 11.\n");

    printf("Done!\n");
    return 0;

}
/* to udnerstand this points easily Pointers 

pointers are like register which security guards librarian used to have, using this registers we know where all books are 

if i need a book or change a sentence in a book these pointers helps me

we use "*" thi star is used to change the data in the book, in this code example pointer_to_n is the address i mean the location of book like first row 3 coloum like that

if i use "*" it change sthe sentence or the data 

that's it pointer for you .

the advantage fo pointer is to change or manipulate data without carryign the data itself.

imagine I just declare a pointer. then whenver i just need to change the data inside pointer iuse "*" and change data inside instead of fetching data changeing again adding look how easy it is now.
*/