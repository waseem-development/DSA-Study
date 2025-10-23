#include <iostream>
#include <climits> 
int main()
{
    int arr[5] = {10, 12, 3, 48, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    int largest = arr[0];
    int smallest = arr[0]; 
    
    int smallest_index;
    int largest_index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largest_index = i;
        }
    }
    std::cout << "Smallest value of this array is: " << smallest << " at index " << smallest_index << std::endl;
    std::cout << "Largest value of this array is: " << largest << " at index " << largest_index  << std::endl;
    return 0;
}