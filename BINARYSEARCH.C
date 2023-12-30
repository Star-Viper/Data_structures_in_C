#include <stdio.h>
int main()
{
    int arr[5] = {12, 30, 70, 90, 200};
    int srch, lb = 0, ub = 4, mid;
    printf("\nEnter a number to be searched ? :\n ");
    scanf("%d", &srch);
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (srch == arr[mid])
            break;
        else if (srch > arr[mid])
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    if (lb > ub)
        printf("Not found\n");
    else
        printf("found at position %d \n", mid);
    return 0;
}
