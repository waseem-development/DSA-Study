#include <iostream>
// #include <utility>
void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;

        while (start < end)
        {
            std::swap(arr[start], arr[end]);
            start++;
            end--;
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

    std::cout << "\nArray before reversing: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i]<< " ";
    }

    reverseArray(arr, size);

    std::cout << "\nArray After reversing: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i]<< " ";
    }
    return 0;
}