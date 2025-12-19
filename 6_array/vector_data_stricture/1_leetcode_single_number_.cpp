#include<iostream>
#include<vector>
int singleNumber(std::vector<int> nums) {
    int answer = 0;
    for (int value : nums)
    {
        answer ^= value;
    }
    return answer;
    
}
int main() {
    int index = 0;
    std::vector<int> nums;
    for (int value : nums)
    {
        std::cout<<"Enter the "<<index+1<<"th number of the array (vector): ";
        std::cin>>value;
    }
    
    return 0;
}