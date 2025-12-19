#include <iostream>
#include <vector>
int linearSearch(std::vector<int> &nums, int target)
{

    int index = 0;
    for (int num : nums)
    {
        if (nums[index] == target)
        {
            std::cout << "Target value " << target << " is present at index number " << index << "\n";
            return index;
        }
        index++;
    }

    std::cout << "Target value " << target << " is not present in the array\n";
    return -1;
}
int main()
{
    std::vector<int> nums = {11, 24, 38, 46, 15};
    int target;
    std::cout << "Enter the targeted value to be searched: ";
    std::cin >> target;
    std::cout << "\n";
    linearSearch(nums, target);
    return 0;
}