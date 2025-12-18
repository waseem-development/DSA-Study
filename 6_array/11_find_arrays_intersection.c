#include <stdio.h>
#include <stdbool.h>
void findIntersection(int arr0[], int size0, int arr1[], int size1)
{
    int maxSize = size0 > size1 ? size0 : size1;
    int intersectedArray[maxSize];
    int count = 0;

    for (int i = 0; i < size0; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (arr0[i] == arr1[j])
            {
                bool alreadyAdded = false;
                for (int k = 0; k < count; k++)
                {
                    if (intersectedArray[k] == arr0[i])
                    {
                        alreadyAdded = true;
                        break;
                    }
                }
                if (!alreadyAdded)
                {
                    intersectedArray[count] = arr0[i];
                    count++;
                }
            }
        }
    }

    printf("Intersected array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",intersectedArray[i]);
    }
    printf("\n");
}
int main()
{
    int size0, size1;

    printf("Enter the size of arr0: ");
    scanf("%d", &size0);

    int arr0[size0];
    for (int i = 0; i < size0; i++)
    {
        printf("Enter %dth value of the array: ", i + 1);
        scanf("%d", &arr0[i]);
    }
    printf("\n");

    printf("Enter the size of arr1: ");
    scanf("%d", &size1);

    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        printf("Enter %dth value of arr1: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("\n");

    findIntersection(arr0, size0, arr1, size1);

    return 0;
}
