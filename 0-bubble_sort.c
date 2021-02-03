#include <stdio.h>
#include "sort.h"

/**
  *bubble_sort - sort algorithm.
  *@array: the arrat to sort.
  *@size: the size of the array.
  */

void bubble_sort(int *array, size_t size)
{
int swap;
size_t i, j;

if (!array || array == NULL || size == 0)
return;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (array[j] > array[j + 1])
{
swap = array[j + 1];
array[j + 1] = array[j];
array[j] = swap;
}
}
print_array(array, size);
}
}
