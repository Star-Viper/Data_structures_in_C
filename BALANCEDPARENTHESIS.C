#include <stdio.h>
// #include<conio.h>
#include <ctype.h>

char *e, x;
char n[100];
char stack[100]; // Added declaration of stack
int top = -1;

char pop()
{
	if (top == -1)
	{
		return -1;
	}
	else
	{
		return stack[top--];
	}
}

void push(char x)
{
	stack[++top] = x;
}

int priority(char x)
{
	if (x == '(')
	{
		return 0;
	}
	if (x == '+' || x == '-')
	{
		return 1;
	}
	if (x == '*' || x == '/')
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

int main()
{
	// clrscr();

	printf("Enter an Expression: ");
	scanf("%s", n);

	e = n;

	printf("\n");

	while (*e != '\0')
	{
		if (isalnum(*e))
		{
			printf("%c", *e);
		}
		else if (*e == '(')
		{
			push(*e);
		}
		else if (*e == ')')
		{
			while ((x = pop()) != '(')
			{
				printf("%c", x);
			}
		}
		else
		{
			while (priority(stack[top]) >= priority(*e))
			{
				printf("%c", pop());
			}
			push(*e);
		}
		e++;
	}
	while (top != -1)
	{
		printf("%c", pop());
	}
	return 0;
	// getch();
}