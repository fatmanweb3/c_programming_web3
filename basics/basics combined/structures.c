#include <stdio.h>
#include <string.h>

struct book {
    char title[50];
    char author[50];
    int pages;
    float price;
} book1, book2;

int main(){

    strcpy(book1.title, " game fo thrones");
    strcpy(book1.author," ryan gosling");
    book1.pages = 555;
    book1.price = 255.5;

    // Access members and print values
    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Pages: %d\n", book1.pages);
    printf("Price: %.2f\n", book1.price); // .2f for 2 decimal places

    struct book book2 = {" got 2", "james gunn", 1500, 60.5};
    printf("\n book 2 title: %s\n book 2 author: %s\n", book2.title, book2.author);

    book1 = (struct book){" mahabharat", " vyasa", 99999, 999.999};

    printf("\n book 1 title: %s\n book 1 author: %s\n", book1.title, book1.author);

    //pointers to structures

    typedef struct {
        char name[20];
        int age;
        float price;
    } person;

    person guy1;
    person guy2;

    person *ptr_guy1;
    person *ptr_guy2;

    ptr_guy1 = &guy1;

    strcpy(ptr_guy1->name, "reaper");

    printf(" the name of the guys is: %s\n", guy1.name);

    return 0;
}