#include <stdio.h>
int main()
{
    int arr[5] = {12, 3, 7, 90, 2};
    int i, j, key;
    printf("Displaying before sort \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    for (i = 1; i < 5; i++) // i=4 -> 2,3,7,12,90
    {
        key = arr[i];                  // key = 2
        j = i - 1;                     // j=3
        while (j >= 0 && arr[j] > key) // 1>=0 && 7>2
        {
            arr[j + 1] = arr[j]; // arr[2]= arr[1] ->
            j = j - 1;           // j=1
        }
        arr[j + 1] = key; // arr[0]=3, -> 3,7,12,90,2
    }

    printf("\nDisplaying after sort \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
