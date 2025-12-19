#include <iostream>
#include <vector>
void reverseVector(std::vector<int> &nums, int size)
{
    int start = 0, end = size - 1;

    for (int i = 0; start < end; i++)
    {
        std::swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
int main()
{
    std::vector<int> nums = {11, 24, 38, 46, 15};
    int target;
    int size = nums.size();
    std::cout << "Vector before reversing: ";
    for (int val : nums)
    {
        std::cout << val << " ";
    }
    std::cout << "\n";

    reverseVector(nums, size);
    std::cout << "Vector after reversing: ";
    for (int val : nums)
    {
        std::cout << val << " ";
    }
    std::cout << "\n";
    return 0;
}