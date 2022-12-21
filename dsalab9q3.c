#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;

void insert()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (front == NULL)
    {
        front = newnode; 
    }
    else
    {
        struct node *temp;
        temp = front;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void delete()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("Queue is empty ");
    }
    else
    {
        front = front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("Queue is empty ");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void main()
{
    int choice;
    while (1)
    {
        printf("\n 1. Insert \n2. Delete \n3. Display \n4. Exit \n");
        printf("Enter your Priority: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}