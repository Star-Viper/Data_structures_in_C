#include <stdio.h>
#include <stdlib.h>
struct NODE
{
	int info;
	struct NODE *next;
};
struct NODE *start = NULL, *NN, *cur, *save;
void insert_end();
void insert_begin();
void insert_sort();
void insert_position();
void delete_begin();
void delete_end();
void delete_position();
void display();
void main()
{
	int ch, choice = 0;

	do
	{
		printf("1. INSERT_BEG\n");
		printf("2. INSERT END\n");
		printf("3. INSERT AT POSITION\n");
		printf("4. INSERT_SORT\n");
		printf("5. DELETE BEG\n");
		printf("6. DELETE END\n");
		printf("7. DELETE AT P0SITION\n");
		printf("8. Exit\n");
		printf("Enter ur choice");
		scanf("%d", &ch);
		if (ch == 1)
		{
			insert_end();
		}
		else if (ch == 2)
		{
			insert_begin();
		}
		else if (ch == 3)
		{
			insert_position();
		}
		else if (ch == 4)
		{
			insert_sort();
		}
		else if (ch == 5)
		{
			delete_begin();
		}
		else if (ch == 6)
		{
			delete_end();
		}
		else if (ch == 7)
		{
			delete_position();
		}
		else
		{
		}
		printf("Want to continue the operations: 1/0");
		scanf("%d", &choice);
	} while (choice != 0);
}
void insert_begin()
{
	int c;
	while (1)
	{
		NN = (struct NODE *)malloc(sizeof(struct NODE));
		printf("Enter element");
		scanf("%d", &NN->info);
		NN->next = NULL;
		if (start == NULL)
		{
			printf("empty LL, adding first node");
			start = NN;
			cur = NN;
		}
		else
		{
			NN->next = start;
			start = NN;
		}
		printf("\n After adding \n");
		display();
		printf("Want to add more records 1/0");
		scanf("%d", &c);
		if (c == 0)
			break;
	}
}
void insert_end()
{
	int c;
	while (1)
	{
		NN = (struct NODE *)malloc(sizeof(struct NODE));
		printf("Enter element");
		scanf("%d", &NN->info);
		NN->next = NULL;
		if (start == NULL)
		{
			printf("empty LL, adding first node");
			start = NN;
			cur = NN;
		}
		else
		{
			cur = start;
			while (cur->next != NULL)
			{
				cur = cur->next;
			}
			cur->next = NN;
			cur = NN;
		}
		printf("\n After adding at end \n");
		display();
		printf("Want to add more records 1/0");
		scanf("%d", &c);
		if (c == 0)
			break;
	}
}
void insert_position()
{
	int c;
	cur = start;
	save = start;
	while (1)
	{
		NN = (struct NODE *)malloc(sizeof(struct NODE));
		printf("Enter element");
		scanf("%d", &NN->info);
		NN->next = NULL;
		if (start == NULL)
		{
			printf("empty LL, adding first node");
			start = NN;
			cur = NN;
		}
		else
		{
			int i = 1;
			int pos = 0;
			printf("enter position of insertion");
			scanf("%d", &pos);
			while (i != pos - 1)
			{
				i++;
				cur = cur->next;
			}
			NN->next = NULL;
			NN->next = cur->next;
			cur->next = NN;
		}
		printf("\n After adding \n");
		display();
		printf("Want to add more records 1/0");
		scanf("%d", &c);
		if (c == 0)
			break;
	}
}
void insert_sort()
{
	int c;
	cur = start;
	while (1)
	{
		NN = (struct NODE *)malloc(sizeof(struct NODE));
		printf("Enter element");
		scanf("%d", &NN->info);
		NN->next = NULL;
		while (cur->info < NN->info)
		{
			save = cur;
			cur = cur->next;
		}
		save->next = NN;
		NN->next = cur;
		printf("\n After adding at proper location \n");
		display();
		printf("Want to add more records 1/0");
		scanf("%d", &c);
		if (c == 0)
			break;
	}
}
void delete_begin()
{
	cur = start;
	start = start->next;
	printf("\nAfter deletion\n");
	display();
}
void delete_end()
{
	cur = start;
	save = start;
	while (cur->next != NULL)
	{
		save = cur;
		cur = cur->next;
	}
	save->next = NULL;
	printf("\n After dleting from last \n");
	display();
}
void delete_position()
{
	int pos = 0;
	int i = 1;
	cur = start;
	save = start;
	printf("enter position of deletion");
	scanf("%d", &pos);
	while (i != pos - 1)
	{
		i++;
		save = cur;
		cur = cur->next;
	}
	save->next = cur->next;
	cur->next = NULL;
	printf("\n After deleting at position %d \n", pos);
	display();
}
void display()
{
	cur = start;
	while (cur != NULL)
	{
		printf("%d -> ", cur->info);
		cur = cur->next;
	}
}
