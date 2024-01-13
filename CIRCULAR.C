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
    int data;
    printf("Enter element to Enqueue");
    scanf("%d", &data);
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else if ((rear + 1) % MAX == front)
    {
        printf("Overflow Condition");
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}
void Dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Empty Queue, Underflow");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Element Dequeued=%d", queue[front]);
        front = (front + 1) % MAX;
    }
}
void display()
{
    int i;
    printf("Queue =\n");
    if (front > rear)
    {
        for (i = front; i < MAX; i++)
        {
            printf("%d \t", queue[i]);
        }
        for (i = 0; i <= rear; i++)
        {
            printf("%d \t", queue[i]);
        }
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d \t", queue[i]);
        }
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