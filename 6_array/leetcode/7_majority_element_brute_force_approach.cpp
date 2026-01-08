#include <iostream>
#include <vector>
int majorityElement(const std::vector<int> &nums)
{
    int n = nums.size();
    int majorityElement;
    for(int value : nums) {
        int frequency = 0;
        for (int element : nums) {
            if (element == value)
            {
                frequency++;
            }
        }
        if (frequency > n/2)
        {
            majorityElement = value;
        }
        
    }
    return majorityElement;
}

int main()
{
    std::vector<int> nums = {2, 2, 2, 2, 1, 1, 1};
    std::cout<<"Majority Element: "<<majorityElement(nums)<<"\n";
    

    return 0;
}