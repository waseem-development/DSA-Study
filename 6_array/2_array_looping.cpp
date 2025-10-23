#include <iostream>
int main()
{
    int arr[5] = {10, 12, 3, 48, 48};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        std::cout << i + 1 << "th element of array: " << arr[i] << std::endl;
    }
    std::cout << std::endl;
    int arr1[5];
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = 0; i < size1; i++)
    {
        std::cout<<"Enter "<<i+1<<"th value of the array: ";
        std::cin>>arr1[i];
    }

    for (int i = 0; i < size1; i++)
    {
        std::cout << i + 1 << "th element of array: " << arr1[i] << std::endl;
    }

    std::cout<<arr1;
    return 0;
}