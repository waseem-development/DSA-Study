#include <stdio.h>
int majorityElement(const int nums[], int size)
{
    int majorityElement;
    for(int i = 0; i < size; i++) {
        int frequency = 0;
        for (int j = 0; j < size; j++) {
            if (nums[i] == nums[j])
            {
                frequency++;
            }
        }
        if (frequency > size/2)
        {
            majorityElement = nums[i];
        }
        
    }
    return majorityElement;
}

int main()
{
    int nums[] = {2, 2, 2, 2, 1, 1, 1};
    int size = sizeof(nums)/sizeof(nums[0]);
    printf("Majority Element: %d \n", majorityElement(nums, size));
    return 0;
}