#include <iostream>
int main()
{
    int arr0[5] = {10, 12, 3, 48, 48};
    int arr1 [100] = {10, 12, 3, 48, 48}; 
    int arr2 [] = {10, 12, 3, 48, 48}; 
    std::cout << "Size of array arr: "<< sizeof(arr0) << std::endl;
    std::cout << "Size of array arr: "<< sizeof(arr1) << std::endl;
    std::cout << "Size of array arr: "<< sizeof(arr2) << std::endl;
    return 0;
}