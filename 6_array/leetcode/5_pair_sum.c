#include <stdio.h>
#include <stdbool.h>

bool pairSum(int target, int size, int nums[], int result[2])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = nums[i];
                result[1] = nums[j];
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int size = 4;
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int result[2];

    if (pairSum(target, size, nums, result))
    {
        printf("%d %d\n", result[0], result[1]);
    }
    else
    {
        printf("No pairs found\n");
    }

    return 0;
}
