#include <iostream>
void findIntersection(int arr0[], int size0, int arr1[], int size1)
{
    int intersectionArray[] = {};
    int count = 0;
    for (int i = 0; i < size0; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (arr0[i] = arr1[j])
            {
                intersectionArray[count] = arr1[j];
                count++;
            }
        }
    }
    std::cout<<"Intersected aray: ";
    for (int i = 0; i <= count ; i++)
    {
        std::cout<<intersectionArray[i];
    }
    
    std::cout << std::endl;
}

int main()
{
    int size0, size1;

    std::cout << "Enter the size of arr0: ";
    std::cin >> size0;

    int arr0[size0];
    int arr1[size1];

    for (int i = 0; i < size0; i++)
    {
        std::cout << "Enter " << i + 1 << "th value of the array: ";
        std::cin >> arr0[i];
    }
    std::cout << "\n\n";

    std::cout << "\nEnter the size of arr1: ";
    std::cin >> size1;
    for (int i = 0; i < size1; i++)
    {
        std::cout << "Enter " << i + 1 << "th value of the arr1: ";
        std::cin >> arr1[i];
    }
    std::cout << "\n";

    findIntersection(arr0, size0, arr1, size1);
    return 0;
}