#include <iostream>
#include <limits.h>
#include <algorithm>
int main()
{
    int n = 7;
    int nums[n] = {3, -4, 5, 4, -1, 7, -8};
    int maximumSum = INT_MIN;
    int currentSum = 0;

    for (int start = 0; start < n; start++)
    {
        currentSum += nums[start];
        maximumSum = std::max(currentSum, maximumSum);

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    std::cout << "Maximum subarray: " << maximumSum << "\n";
    return 0;
}