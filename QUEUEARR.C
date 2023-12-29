#include <stdio.h>
#include <conio.h>

#define MAX 5
void Enqueue();
void Dequeue();
void QueueFront();
void QueueRear();
void display();
int front = -1, rear = -1, queue[MAX];
void main()
{
    int ch, choice = 0;
    do
    {
        printf("enter operation to use \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. QueueFront\n");
        printf("4. QueueRear\n");
        printf("5. exit\n");
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Enqueue();
            display();
            break;
        case 2:
            Dequeue();
            display();
            break;
        case 3:
            QueueFront();
            display();
            break;
        case 4:
            QueueRear();
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
void Enqueue()
{
    int n;
    printf("Enter the element which you want to enter:\n");
    scanf("%d", &n);
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = n;
    }
    else if (rear == (MAX - 1))
    {
        printf("Overflow condition, Queue is full \n");
    }
    else
    {
        rear++;
        queue[rear] = n;
    }
}
void Dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow condition, Can't remove element");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n Deleted element of the Queue is  %d", queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("The Queue is empty\n");
    }
    else
    {
        printf("Queue=\t");
        for (i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}
void QueueFront()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front==%d\n", queue[front]);
    }
}
void QueueRear()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Rear==%d\n", queue[rear]);
    }
}