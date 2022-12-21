#include<stdio.h>

#define size 5

int arr[size];


int front  = 0;
int rear   = 0;



void dequeue()
{
   if(front == rear)
       printf("Queue is Empty.\n");
   else
   {
       printf("Dequeued element = %d\n",arr[front]);
       front++;
   }
}


void enqueue(int value)
{
   if(rear == size)
       printf("Queue is Full\n");
   else
   {
       arr[rear] = value;
       printf("Enqueued element = %d\n",arr[rear]);
       rear++;
   }
}

int main()
{
   enqueue(1);
   enqueue(2);
   enqueue(3);
   enqueue(4);
   enqueue(5);
   enqueue(6);    
   dequeue();      
   dequeue();      
   dequeue();      
   dequeue();      
   dequeue();      
   dequeue();      

   return 0;
}