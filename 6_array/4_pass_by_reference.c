#include <stdio.h>
void squareArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d value of the array: ", i+1);
        scanf("%d", &arr[i]);
    }

    squareArray(arr, size);
    printf("[");
    for (int i = 0; i < size; i++)
    {
        if (i == size-1)
        {
            printf(arr[i]);
        } else {
            printf("%d, ", arr[i]);
        }
    }
        printf("]\n");

    return 0;
}