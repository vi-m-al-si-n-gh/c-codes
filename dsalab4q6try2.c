#include <stdio.h>  
#include <stdlib.h>  
//Represent a node of singly linked list  
struct node{  
    int data;  
    struct node *next;  
};      
   
//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;  
   
//addNode() will add a new node to the list  
void addNode(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode will become new tail of the list  
        tail = newNode;  
    }  
}  
   
//display() will display all the nodes present in the list  
void traverse() {  
    //Node current will point to head  
    struct node *current = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of singly linked list: \n");  
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  

void Insert_beg()
{
	int data1;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data1);
	temp->data = data1;

	// Pointer of temp will be
	// assigned to start
	temp->next = head;
	head = temp;
}

void Insert_end()
{
	int data1;
	struct node *temp, *head1;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to be inserted : ");
	scanf("%d", &data1);
	// Changes links
	temp->next = 0;
	temp->data = data1;
	head1 = head;
	while (head1->next != NULL) {
		head1 = head1->next;
	}
	head1->next = temp;
}

void Insert_pos()
{
	struct node *temp, *newnode;
	int pos, data1, i = 1;
	newnode = malloc(sizeof(struct node));

	// Enter the position and data
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data1);

	// Change Links
	temp = head;
	newnode->data = data1;
	newnode->next = 0;
	while (i < pos - 1) {
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}

void Insert_after_ele()
{
	struct node *temp, *newnode;
	int pos, data1, i = 1;
	newnode = malloc(sizeof(struct node));

	// Enter the position and data
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data1);

	// Change Links
	temp = head;
	newnode->data = data1;
	newnode->next = 0;
	while (i < pos) {
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}

int main()  
{ 
	addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);
	int choice;

	while (1) {
		printf("\t1 For insertion at starting\n");
		printf("\t2 For insertion at end\n");
		printf("\t3 For insertion at any position\n");
		printf("\t4 For insertion after any position\n");
		printf("\nEnter Choice (1 to 5):\n");
		scanf("%d", &choice);
        Insert_beg();
		switch (choice){
		    case 1:
			{
			    Insert_beg();
			    break;
		    }
		    case 2:
			{
                Insert_end();
			    break;
		    }
		    case 3:
			{
			    Insert_pos();
			    break;
			}
		    case 4:
		    {
		        Insert_after_ele();
			    break;
		    }
		    default:
		    {
			    printf("Incorrect Choice%d\n",choice);
			}
		}
	}
    traverse();
    return 0;  
}  