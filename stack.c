#include<stdio.h>

#include<stdlib.h>
 
#define Size 4 
 
int Top=-1, inp_array[Size];
void Push();
void Pop();
void show();

int main()
{
	int choice;
	
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
}
 
void Push()
{
	int x;
	
	if(Top==Size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		inp_array[Top]=x;
	}
}
 
void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",inp_array[Top]);
		Top=Top-1;
	}
}
 
void show()
{
	
	
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",inp_array[i]);
	}
}












#include<stdio.h>
#include<string.h> 
#include<limits.h>
#include<stdlib.h>
# define MAX 100
int top = -1;
char stack[MAX];

// checking if stack is full
int isFull() {
    return top == MAX - 1;
} 

// checking is stack is empty
int isEmpty() { 
    return top == -1; 
}

// Push function here, inserts value in stack and increments stack top by 1
void push(char item) {
    if (isFull()) 
        return; 
	top++;
	stack[top] = item;
}

// Function to remove an item from stack.  It decreases top by 1 
int pop() { 
    if (isEmpty()) 
        return INT_MIN; 
        
    // decrements top and returns what has been popped      
    return stack[top--]; 
} 

// Function to return the top from stack without removing it 
int peek(){ 
    if (isEmpty()) 
        return INT_MIN; 
    return stack[top]; 
} 

// A utility function to check if the given character is operand 
int checkIfOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); 
} 

// Fucntion to compare precedence
// If we return larger value means higher precedence 
int precedence(char ch) 
{ 
    switch (ch) 
    { 
    case '+': 
    case '-': 
        return 1; 

    case '*': 
    case '/': 
        return 2; 

    case '^': 
        return 3; 
    } 
    return -1; 
} 

// The driver function for infix to postfix conversion 
int getPostfix(char* expression) 
{ 
    int i, j;

    for (i = 0, j = -1; expression[i]; ++i) 
    { 
        // Here we are checking is the character we scanned is operand or not
        // and this adding to to output. 
        if (checkIfOperand(expression[i])) 
            expression[++j] = expression[i]; 

        // Here, if we scan character ‘(‘, we need push it to the stack. 
        else if (expression[i] == '(') 
            push(expression[i]); 

        // Here, if we scan character is an ‘)’, we need to pop and print from the stack  
        // do this until an ‘(‘ is encountered in the stack. 
        else if (expression[i] == ')') 
        { 
            while (!isEmpty(stack) && peek(stack) != '(') 
                expression[++j] = pop(stack); 
            if (!isEmpty(stack) && peek(stack) != '(') 
                return -1; // invalid expression              
            else
                pop(stack); 
        } 
        else // if an opertor
        { 
            while (!isEmpty(stack) && precedence(expression[i]) <= precedence(peek(stack))) 
                expression[++j] = pop(stack); 
            push(expression[i]); 
        } 

    } 

    // Once all inital expression characters are traversed
    // adding all left elements from stack to exp
    while (!isEmpty(stack)) 
        expression[++j] = pop(stack); 

    expression[++j] = '\0'; 
    
}

void reverse(char *exp){

    int size = strlen(exp);
    int j = size, i=0;
    char temp[size];

    temp[j--]='\0';
    while(exp[i]!='\0')
    {
        temp[j] = exp[i];
        j--;
        i++;
    }
    strcpy(exp,temp);
}
void brackets(char* exp){
    int i = 0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='(')
            exp[i]=')';
        else if(exp[i]==')')
            exp[i]='(';
        i++;
    }
}
void InfixtoPrefix(char *exp){

    int size = strlen(exp);

    // reverse string
    reverse(exp);
    //change brackets
    brackets(exp);
    //get postfix
    getPostfix(exp);
    // reverse string again
    reverse(exp);
}

int main()
{    
    printf("The infix is: ");

    char expression[] = "((a/b)+c)-(d+(e*f))"; 
    printf("%s\n",expression);
    InfixtoPrefix(expression); 

    printf("The prefix is: ");
    printf("%s\n",expression);

    return 0; 
}