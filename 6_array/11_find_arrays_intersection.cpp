#include <iostream>

void findIntersection(int arr0[], int size0, int arr1[], int size1) 
{
    int maxSize = (size0 < size1) ? size0 : size1;
    int intersectionArray[maxSize];
    int count = 0;

    for (int i = 0; i < size0; i++) 
    {
        for (int j = 0; j < size1; j++) 
        {
            if (arr0[i] == arr1[j]) 
            {
                bool alreadyAdded = false;

                for (int k = 0; k < count; k++) 
                {
                    if (intersectionArray[k] == arr0[i]) 
                    {
                        alreadyAdded = true;
                        break;
                    }
                }

                if (!alreadyAdded) 
                {
                    intersectionArray[count] = arr0[i];
                    count++;
                }
            }
        }
    }

    std::cout << "Intersection Array: ";
    for (int i = 0; i < count; i++)
        std::cout << intersectionArray[i] << " ";
    
    std::cout << "\n";
}

int main()
{
    int size0, size1;

    std::cout << "Enter the size of arr0: ";
    std::cin >> size0;

    int arr0[size0];
    
    for (int i = 0; i < size0; i++)
    {
        std::cout << "Enter " << i + 1 << "th value of the array: ";
        std::cin >> arr0[i];
    }
    std::cout << "\n";
    
    std::cout << "\nEnter the size of arr1: ";
    std::cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        std::cout << "Enter " << i + 1 << "th value of the arr1: ";
        std::cin >> arr1[i];
    }
    std::cout << "\n";

    findIntersection(arr0, size0, arr1, size1);
    return 0;
}