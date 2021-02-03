#include "sort.h"

/**
 *selection_sort - algorithm
 *@size: the size of the array.
 *@array: the array.
 */

void selection_sort(int *array, size_t size)
{
unsigned int i, j;
int min_idx, hasmoved;

for (i = 0; i < size - 1; i++)
{
hasmoved = 0;
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
{
hasmoved = 1;
min_idx = j;
swap(&array[min_idx], &array[i]);
print_array(array, size);
}
}
if (!hasmoved)
return;
}
}

/**
 *swap - swap two function.
 * @xp: first.
 * @yp: second.
 */

void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
