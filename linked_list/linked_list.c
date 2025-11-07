#include <stdio.h>

#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};


int main()
{
    // creating 3 nodes

    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // Assign data and connect nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    //traverse and print the linked list
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    //free memory 

    free(head);
    free(second);
    free(third);
    
    return 0;
}