// write a menu driven program to create linked list where user give the option for 
// injection for each element
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node* link;
};
struct node* start = NULL;

void createList()
{
    if (start == NULL) 
    {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0) 
        {
            int data;
            struct node* newnode;
            struct node* temp;
            newnode = malloc(sizeof(struct node));
            start = newnode;
            temp = start;
            printf("\nEnter number to"
                   " be inserted : ");
            scanf("%d", &data);
            start->info = data;
  
            for (int i = 2; i <= n; i++) 
            {
                newnode = malloc(sizeof(struct node));
                temp->link = newnode;
                printf("\nEnter number to"
                       " be inserted : ");
                scanf("%d", &data);
                newnode->info = data;
                temp = temp->link;
                printf("list : %d",data);
            }
            printf("\nThe list is created\n");
        }
        
    }
    else
        printf("\nThe list is already created\n");
}

void displayList(struct node *catchead) {
   struct node *temp;
   if (catchead == NULL) {
      printf("List is empty.\n");
      return;
   }
   printf("elements of list are : ");
//    temp = catchead;
   while (catchead != NULL) {
      printf("%d ", catchead->info);
      catchead = catchead->link;
   }
   printf("\n");
}

void insertion()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp->info = data;
 
    temp->link = start;
    start = temp;
}

int main()
{
    struct node *head;
    createList();
    displayList(head);
    insertion();
}