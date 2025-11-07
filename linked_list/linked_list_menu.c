#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node* head = NULL; // global head pointer

// function to create a new node


// function to create a node
struct node* createnode(int data) 
{
    struct node* newnode = (struct node*)(malloc(sizeof(struct node)));

    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

// add node at the end 

void addnodeend(int data)
{
    struct node* newnode = createnode(data);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    struct node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}


void inserteatposition(int data, int pos)
{
    struct node* newnode = createnode(data);

    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    struct node* temp = head;
    for (int i = 1; temp != NULL && i < pos -1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf(" X Position out of Rang! \r\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}


void deleteatposition(int pos)
{
    if(head == NULL)
    {
        printf("list is empty!\n");
        return;
    }

    struct node* temp = head;

    if (pos == 1)
    {
        head = temp->next;
        free(temp);

        return;
    }

    struct node* prev = NULL;
    for(int i =1; temp != NULL && i < pos -1; i++ )
    {

        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf(" X Position out of range!\r\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}


void displayall()
{
    struct node* temp = head;

    if (temp ==NULL)
    {
        printf("list is empty\r\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;

    printf("NULL\r\n");
    }
}

int main()
{
    int choice, data, pos;


    while(1)
    {
        printf("\n===== LINKED LIST MENU =====\n");
        printf("1. Add Node at End\n");
        printf("2. Insert Node at Position\n");
        printf("3. Delete Node at Position\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);


        switch (choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                addnodeend(data);
                break;

            case 2:
                printf("enter data and position: ");
                scanf("%d %d", &data, &pos);
                inserteatposition(data, pos);
                break;
            
            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteatposition(pos);
                break;
            
            case 4:
                displayall();
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");


        }
    }
}