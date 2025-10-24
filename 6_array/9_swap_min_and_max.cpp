#include <iostream>
void swapSmallestAndLargest(int arr[], int size)
{
    int indexOfSmallest = 0;
    int indexOfLargest = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[indexOfSmallest])
        {
            indexOfSmallest = i;
        }
        if (arr[i] > arr[indexOfLargest])
        {
            indexOfLargest = i;
        }
    }
    int temp = arr[indexOfSmallest];
    arr[indexOfSmallest] = arr[indexOfLargest];
    arr[indexOfLargest] = temp;

    std::cout << "Array after swapping smallest and alrgest elements: [";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            std::cout << arr[i] << "]\n\n";
        }
        else
        {
            std::cout << arr[i] << ", ";
        }
    }
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

    swapSmallestAndLargest(arr, size);
    return 0;
}