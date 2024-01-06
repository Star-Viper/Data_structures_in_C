#include <stdio.h>
int main()
{
    int arr[5] = {12, 3, 7, 90, 2};
    int i, j, k;
    printf("Displaying before sort \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    for (i = 0; i < 4; i++) // i=0,1,2,3
    {
        for (j = 0; j < 4 - i; j++) // j=0
        {
            if (arr[j] > arr[j + 1]) // j 0,1
            {
                k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
    printf("\nDisplaying after sort \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}