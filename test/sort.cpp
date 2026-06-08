#include <iostream>
#include "sort.h"

void print_array(const int arr[], int len)
{
    for (int i = 0; i < len; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

int main()
{
    int arr1[] = {9, 5, 2, 7, 1, 8, 3, 6, 4};
    int arr2[] = {9, 5, 2, 7, 1, 8, 3, 6, 4};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "before insert_sort: ";
    print_array(arr1, len1);

    insert_sort(arr1, len1);

    std::cout << "after insert_sort:  ";
    print_array(arr1, len1);

    std::cout << "before select_sort: ";
    print_array(arr2, len2);

    select_sort(arr2, len2);

    std::cout << "after select_sort:  ";
    print_array(arr2, len2);

    return 0;
}