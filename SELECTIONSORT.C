#include <stdio.h>
int main()
{
    int arr[5] = {12, 3, 7, 90, 2};
    int i, j, k, min, pos;
    printf("Displaying before sort \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    for (i = 0; i < 5; i++) // i=0
    {
        min = arr[i]; // 12
        pos = i;
        for (j = i + 1; j < 5; j++) // j=1
        {
            if (arr[j] < min)
            {
                min = arr[j];
                pos = j;
            }
        }
        k = arr[i];
        arr[i] = arr[pos];
        arr[pos] = k;
    }
    printf("\nDisplaying after sort \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}