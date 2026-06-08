#include "sort.h"
#include <stdio.h>
#include "calc.h"

void insert_sort(int arr[], int len)
{
    int number1=add(29,21);
    printf("%d\n",number1);
    for (int i = 1; i < len; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}