#include<iostream>
int main() {
    int n = 5;
    int nums[n] = {1,2,3,4,5};
    
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                std::cout<<nums[i];
            }
            std::cout<<" ";
        }
        std::cout<<"\n";
    }
    
    return 0;
}