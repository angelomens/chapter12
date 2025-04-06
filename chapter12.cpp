#include <iostream>
#include <string>

// Generic function to find the maximum element in an array
template <typename T>
T findMaximum(T array[], int size) 
{
    T max = array[0];
    for (int i = 1; i < size; ++i) 
    {
        if (array[i] > max) 
        {
            max = array[i];
        }
    }
    return max;
}

int main() 
{
    // Test with array
    int int_arr[] = {3, 7, 2, 9, 5};
    int int_max = findMaximum(int_arr, 5);
    std::cout << "Maximum number in int array: " << int_max << std::endl;

    // Test with double array
    double double_arr[] = {2.5, 4.5, 3.9, 4.2, 3.3};
    double doubleMax = findMaximum(double_arr, 5);
    std::cout << "Maximum number in double array: " << doubleMax << std::endl;

    // Test with string array
    std::string string_arr[] = {"car", "bus", "train", "ship"};
    std::string string_max = findMaximum(string_arr, 4);
    std::cout << "Maximum in string array: " << string_max << std::endl;

    return 0;
}
