#include <stdio.h>
#include <conio.h>
#define MAX 15
void push(int val);
int pop();
int empty();

int s[MAX], top = -1;
void main()
{
    int no, i, j, ch, n, e, u;
    int a[MAX][MAX], v[MAX];
    printf("\nEnter number of nodes in graph");
    scanf("%d", &no);
    for (i = 0; i <= no; i++)
    {
        for (j = 0; j <= no; j++)
        {
            a[i][j] = 0;
        }
    }
    printf("\nEnter connectivity among nodes");
    for (i = 1; i <= no; i++)
    {
        printf("\nSpecify node no %d is connected to how many nodes: ", i);
        scanf("%d", &ch);
        for (j = 1; j <= ch; j++)
        {
            printf("\nEnter node number:");
            scanf("%d", &n);
            a[i][n] = 1;
        }
    }
    printf("\nAdjacency matrix\n");
    for (i = 1; i <= no; i++)
    {
        for (j = 1; j <= no; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i <= no; i++)
        v[i] = 0;
    printf("\nEnter starting node: ");
    scanf("%d", &u);
    push(u);
    printf("\nDepth First Search: ");
    while ((e = empty()) != -1)
    {
        u = pop();
        if (v[u] == 0)
        {
            printf(" %d ", u);
            v[u] = 1;
        }
        for (i = 1; i <= no; i++)
        {
            if (a[u][i] == 1 && v[i] == 0)
            {
                push(u);
                v[i] = 1;
                printf(" %d ", i);
                u = i;
            }
        }
    }
    getch();
}

void push(int val)
{
    top++;
    s[top] = val;
}
int pop()
{
    int val;
    val = s[top];
    top--;
    return val;
}
int empty()
{
    if (top == -1)
        return -1;
    else
        return 1;
}