#include <iostream>
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            std::cout<<"Target is present at index "<<i<<std::endl;
            return target;
        }
    }
    return -1;
}

int main()
{
    int size;
    std::cout << "Enter the size of array: ";
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter " << i + 1 << "th value of the array: ";
        std::cin >> arr[i];
    }

    int target;
    std::cout << "Enter the target value to search: ";
    std::cin >> target;

    std::cout<<"Target value is present at "<<linearSearch(arr, size, target)<<std::endl;;


    return 0;
}