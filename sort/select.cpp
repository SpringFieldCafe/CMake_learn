#include "sort.h"

void select_sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}