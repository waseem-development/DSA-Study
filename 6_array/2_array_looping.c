#include <stdio.h>

int main()
{
    int arr[5] = {10, 12, 3, 48, 48};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%dth element of array: %d\n", i + 1, arr[i]);
    }

    printf("\n\n");
    int arr1[5];
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    for (int i = 0; i < size1; i++)
    {
        printf("Enter %dth value of the array: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    for (int i = 0; i < size1; i++)
    {
        printf("%dth element of array: %d\n", i + 1, arr1[i]);
    }
    
    return 0;
}
