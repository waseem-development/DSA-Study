#include <stdio.h>
#include <limits.h>
int main()
{
    int nums[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    int maximumSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;
        for (int end = start; end < n; end++)
        {
            currentSum += nums[end];
                if (maximumSum < currentSum)
                {
                    maximumSum = currentSum;
                }
            
        }
    }
    printf("Maximum subarray: %d\n", maximumSum);
    return 0;
}