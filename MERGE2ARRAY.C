#include <stdio.h>
int main()
{
    int arr1[5] = {12, 14, 23, 45, 56};
    int arr2[7] = {1, 12, 23, 25, 29, 45, 67};
    int arr3[12];
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < 5 && j < 7;)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else if (arr2[j] < arr1[i])
            arr3[k++] = arr2[j++];
        else
        {
            arr3[k++] = arr1[i++];
            arr3[k++] = arr2[j++];
        }
    }
    for (; i < 5; i++)
        arr3[k++] = arr1[i++];
    for (; j < 7; j++)
        arr3[k++] = arr2[j++];

    for (k = 0; k < 12; k++)
        printf("%d ", arr3[k]);
    return 0;
}