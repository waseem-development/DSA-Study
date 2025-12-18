#include <stdio.h>
int linearSearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            printf("Targeted value %d is located at index %d", target, i);
            return target;
        }
    }
    return -1;
}
int main()
{
    int size;
    printf("Enter the size of array arr: ");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the %dth value of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the targeted value: ");
    scanf("%d", &target);

    linearSearch(arr, target, size);
    return 0;
}