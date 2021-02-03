#include <stdio.h>

#include "sort.h"

/**
 *bubble_sort - sort algorithm.
 *@array: the arrat to sort.
 *@size: the size of the array.
 */

void bubble_sort(int * array, size_t size) {
    int swap, swapped;
    size_t i, j;

    if (!array || array == NULL || size == 0)
        return;

    for (i = 0; i < size; i++) {
        swapped = 0;
        for (j = 0; j < size; j++) {
            if (array[j] > array[j + 1]) {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
                swapped = 1;
            }
            print_array(array, size);
            if (swapped == 0 && i == size - 1)
            {
                break;
            }
        }
    }
}