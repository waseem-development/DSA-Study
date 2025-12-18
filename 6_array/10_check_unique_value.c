#include <stdio.h>
#include <stdbool.h>

void checkUniqueness(int arr[], int size)
{
    printf("Unique values of array are: ");
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter %dth value of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    checkUniqueness(arr, size);

    return 0;
}
