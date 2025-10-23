#include <iostream>
void squareArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * arr[i];
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

    squareArray(arr, size);
    std::cout<<"[";
    for (int i = 0; i < size; i++)
    {
        if (i == size-1)
        {
            std::cout << arr[i];
        } else {
            std::cout << arr[i]<<", ";
        }
    }
        std::cout<<"]"<<std::endl;

    return 0;
}