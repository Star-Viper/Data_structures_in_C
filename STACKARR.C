#include <stdio.h>
#include <conio.h>

void push();
void pop();
void peek();
void display();
int tos = -1;
int max;
int data;
int stack[100];

void main()
{
    int ch, choice = 0;
    printf("enter size of stack less than equal to 100\n");
    scanf("%d", &max);
    do
    {
        printf("enter operation to use \n");
        printf("1. Push element\n");
        printf("2. Pop element\n");
        printf("3. show top element\n");
        printf("4. display\n");
        printf("5. exit\n");
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            display();
            break;
        case 2:
            pop();
            display();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
        case 5:
            printf("exit completed\n");
            break;
        default:
            printf("error\n");
            break;
        }
        printf("do you want to continue 1/0\n");
        scanf("%d", &choice);
    } while (choice != 0);
}
void push()
{
    if (tos == (max - 1))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter element to be pushed\n");
        scanf("%d", &data);
        tos++;
        stack[tos] = data;
        printf("push done\n");
    }
}
void pop()
{
    if (tos == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("element popped is %d \n", stack[tos]);
        tos--;
    }
}
void display()
{
    int i;
    if (tos == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("The stack is=\n");
        for (i = tos; i >= 0; i--)
        {
            printf("%d\n ", stack[i]);
        }
    }
}
void peek()
{
    if (tos == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("the top element is %d\n", stack[tos]);
    }
}