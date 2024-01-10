// stack
#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the stack

int top = -1;        // Index of the top element in the stack
int stack[MAX_SIZE]; // Array to store the stack elements

void push()
{
    int data;

    if (top == MAX_SIZE - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        printf("Enter element to insert : \n");
        scanf("%d", &data);
        stack[++top] = data;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        printf("Deleted item is %d \n", stack[top]);
        return stack[top--];
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for ( i = top; i >= 0; i--)
        {
            printf("%d \n", stack[i]);
        }
        printf("\n");
    }
}

void main()
{
    int choice;

    while (1)
    {
        printf("\nEnter 1 for traverse : \n");
        printf("Enter 2 for insert : \n");
        printf("Enter 3 for delete : \n");
        printf("Enter 4 for Exit : \n");
        printf("Enter your choice -> ");
        scanf("%d", &choice);

        switch (choice)

        {
        case 1:
            display();
            break;
        case 2:

            push();
            break;
        case 3:
            pop();
            break;
        case 4:
            return;

        default:
            printf("Wrong choice!\n");
            break;
        }
    }
}