#include <Stdio.h>
#include <string.h>
#include <stdlib.h>


struct node
{
    int rollno;
    struct node *next;

};



int main()
{
    struct node *head = NULL, *temp = NULL, *newnode;

    int roll;
    printf(" Enter the roll Numbers ( type -1 to stop): ");
    while (1)
    {
        scanf("%d", &roll);
        if (roll == -1)
        {
            break;
        }

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->rollno = roll;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp->next = newnode;
        }
        temp = newnode;
    }

        printf("\nstudent roll numbers:\n");
        temp = head;

        while (temp != NULL) 
        {
            printf("%d -> ", temp->rollno);
            temp = temp->next;
        }

        printf("\n NULL \n");

        return 0;
    
    
}