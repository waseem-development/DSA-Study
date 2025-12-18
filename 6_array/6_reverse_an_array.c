#include <stdio.h>
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start< end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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
        printf("Enter %dth value of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray before reversing: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nArray after reversing: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
