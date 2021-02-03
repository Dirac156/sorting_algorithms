#include <stdio.h>

#include "sort.h"

/**
 *swap - wap two values
 *@prev: the arrat to sort.
 *@next: the size of the array.
 */
void swap(int *prev, int *next)
{
int swap_numb = *prev;
*prev = *next;
*next = swap_numb;
}

/**
 *bubble_sort - sort algorithm.
 *@array: the arrat to sort.
 *@size: the size of the array.
 */

void bubble_sort(int *array, size_t size)
{
int swapped;
unsigned int i, j;

if (!array || size <= 1)
return;
for (i = 0; i < size; i++)
{
swapped = 0;
for (j = 0; j < size; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
swapped = 1;
print_array(array, size);
}
}
if (!swapped)
return;
}
}
