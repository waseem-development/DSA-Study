#include <stdio.h>
int main()
{
    int nums[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                printf("%d ", nums[i]);
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}