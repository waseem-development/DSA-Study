#include <iostream>
#include <vector>
#include<algorithm>
int majorityElement(std::vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int frequency = 1, majorityElement = nums[0];;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
        }
        if (frequency > n / 2)
        {
            majorityElement = nums[i];
        }
    }
    return majorityElement;
}

int main()
{
    std::vector<int> nums = {2, 2, 2, 2, 1, 1, 1};
    std::cout << "Majority Element: " << majorityElement(nums) << "\n";
    return 0;
}