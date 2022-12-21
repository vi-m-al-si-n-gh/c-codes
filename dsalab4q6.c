// C program for the all operations in
// the Singly Linked List
#include <stdio.h>
#include <stdlib.h>
// Linked List Node
struct node {
	int info;
	struct node* link;
};
struct node* start = NULL;

// Function to create list with n nodes initially
void createList()
{
	if (start == NULL) {
		int n;
		printf("\nEnter the number of nodes: ");
		scanf("%d", &n);
		if (n != 0) {
			int data;
			struct node* newnode;
			struct node* temp;
			newnode = malloc(sizeof(struct node));
			start = newnode;
			temp = start;
			printf("\nEnter number to be inserted : ");
			scanf("%d", &data);
			start->info = data;

			for (int i = 2; i <= n; i++) {
				newnode = malloc(sizeof(struct node));
				temp->link = newnode;
				printf("\nEnter number to"
					" be inserted : ");
				scanf("%d", &data);
				newnode->info = data;
				temp = temp->link;
			}
		}
		printf("\nThe list is created\n");
	}
	else
		printf("\nThe list is already created\n");
}
// Function to traverse the linked list
void traverse()
{
	struct node* temp;

	// List is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Else print the LL
	else {
		temp = start;
		while (temp != NULL) {
			printf("Data = %d\n", temp->info);
			temp = temp->link;
		}
	}
}

// Function to insert at the front
// of the linked list
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);
	temp->info = data;

	// Pointer of temp will be
	// assigned to start
	temp->link = start;
	start = temp;
}

// Function to insert at the end of
// the linked list
void insertAtEnd()
{
	int data;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));

	// Enter the number
	printf("\nEnter number to be inserted : ");
	scanf("%d", &data);

	// Changes links
	temp->link = 0;
	temp->info = data;
	head = start;
	while (head->link != NULL) {
		head = head->link;
	}
	head->link = temp;
}

// Function to insert at any specified
// position in the linked list
void insertAtPosition()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));

	// Enter the position and data
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);

	// Change Links
	temp = start;
	newnode->info = data;
	newnode->link = 0;
	while (i < pos - 1) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}
void insertAfterPosition()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));

	// Enter the position and data
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);

	// Change Links
	temp = start;
	newnode->info = data;
	newnode->link = 0;=-[]
	while (i < pos) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}

// Driver Code
int main()
{
	int choice,n;
	while (1) {

		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at starting\n");
		printf("\t3 For insertion at end\n");
		printf("\t4 For insertion at any position\n");
		printf("\t5 For insertion after any position\n");
		printf("\nEnter Choice (1 to 5):\n");
		scanf("%d", &choice);
		printf("enter n:");
		scanf("%d",&n);

		switch (choice) {
		    case 1:
			{
			    traverse();
			    break;
			}
		    case 2:
			{
			    insertAtFront();
				traverse();
			    printf("Sucess");
			    break;
		    }
		    case 3:
			{
				for(int i=0;i<n;i++){
                    insertAtEnd();
				}
				traverse();
			    break;
		    }
		    case 4:
			{
			    insertAtPosition();
				traverse();
			    printf("Sucess");
			    break;
			}
		    case 5:
		    {
		        insertAfterPosition();
				traverse();
			    printf("Sucess");
			    break;
		    }
		    default:
		    {
			printf("Incorrect Choice%d\n",choice);
			}
		}
	}
	return 0;
}



// A [-5 ... +20][20 ... 70], BA = 1020, Size of element = 8 bytes. Find the location of a[0][30].   
  
// Address [A[0][30]) = ((30-20) x 24 + 5)  x 8 + 1020   =  245 x 8 + 1020 = 2980 bytes 