#include <iostream>
#include <vector>
int singleNumber(std::vector<int>& nums)
{
    int answer = 0;
    for (int value : nums)
    {
        answer ^= value;
    }
    return answer;
}
int main()
{
    int size;
    std::vector<int> nums;
    std::cout << "--- Single Number Finder ---\n";
    std::cout << "How many numbers would you like to enter? ";
    std::cin >> size;

    if (size < 1)
    {
        std::cout << "Please enter a valid number: \n";
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        int temp;
        std::cout << "Enter the " << i + 1 << "th value of the array: ";
        std::cin >> temp;
        nums.push_back(temp);
    }

    std::cout<<"The number(s) that appears only once is/are: "<<singleNumber(nums)<<"\n";

    return 0;
}