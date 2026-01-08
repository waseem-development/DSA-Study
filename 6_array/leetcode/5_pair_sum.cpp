#include <iostream>
#include<vector>
bool pairSum(int target, std::vector<int> nums, std::vector<int> result){
    for (int start = 0; start < nums.size(); start++)
    {
        for (int end = start+1; end < nums.size(); end++)
        {
            if (nums[start] + nums[end] == target) {
                result.push(nums[start]);
                result.push(nums[end]);
                return true;
            }
        }
    }

    return false;
}
int main()
{
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result;
    if(pairSum(target, nums, result)) {
        std::cout<<result[0]<<" "<<result[1]<<"\n";
    } else {
        std::cout<<"No pairs found\n";
    }
    
    return 0;
}