#include <iostream>
#include <vector>
#include<algorithm>
int majorityElement(std::vector<int>& nums)
{
    int frequency = 0, majorityElementContainer = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (frequency == 0)
        {
            majorityElementContainer = nums[i];
            frequency = 1;
        }
        else if (nums[i] == majorityElementContainer)
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }

    return majorityElementContainer;
}

int main()
{
    std::vector<int> nums = {2, 2, 2, 2, 1, 1, 1};
    std::cout << "Majority Element: " << majorityElement(nums) << "\n";
    return 0;
}