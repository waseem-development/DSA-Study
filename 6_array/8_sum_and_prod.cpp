#include <iostream>

void sumArray(int arr[], int size)
{
    int sum = 0;
    int i = 0;
    while (i < size)
    {
        sum += arr[i];
        i++;
    }
    std::cout << "Sum of all elements of array: " << sum << std::endl;
}

void productArray(int arr[], int size)
{
    int product = 1;
    int i = 0;
    while (i < size)
    {

        product *= arr[i];
        i++;
    }
    std::cout << "Product of all elements of array: " << product << std::endl;
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

    sumArray(arr, size);
    productArray(arr, size);

    return 0;
}