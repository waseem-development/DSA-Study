#include <stdio.h>
#include <limits.h> 
int main()
{
    int arr[5] = {10, 12, 3, 48, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Smallest value of this array is: %d\n", smallest) ;
    printf("Largest value of this array is: %d\n", largest) ;
    return 0;
}