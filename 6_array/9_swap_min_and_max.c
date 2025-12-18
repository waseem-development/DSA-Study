#include<stdio.h>
void swapSmallestAndLargest(int arr[], int size) {
    int smallestIndex = 0, largestIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[smallestIndex])
        {
            smallestIndex = i;
        }
        if (arr[i] > arr[largestIndex])
        {
            largestIndex = i;
        }
    }
    int temp = arr[largestIndex];
    arr[largestIndex] = arr[smallestIndex];
    arr[smallestIndex] = temp;

    printf("Array after swaping smallest and largest values: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
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

    swapSmallestAndLargest(arr, size);

    return 0;
}
