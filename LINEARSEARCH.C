#include <stdio.h>

int main()
{
    int arr[5] = {12, 3, 7, 9, 2};
    int srch, i;
    printf("Enter a number to be searched ? : ");
    scanf("%d", &srch); // 3
    for (i = 0; i < 5; i++)
    {
        if (srch == arr[i])
            break;
    }
    if (i == 5)
        printf("Not found");
    else
        printf("found at %d ", i);
    return 0;
}