#include "sort.h"

/**
 *selection_sort - algorithm
 *@size: size.
 *@array: the array.
 */

void selection_sort(int *array, size_t size)
{
size_t switched = 0, min_idx;

if (!array || size <= 1)
return;
for (; switched < size; switched++)
{
min_idx = smallest(array, switched, size);
if (min_idx != switched)
{
swap(&array[switched], &array[min_idx]);
print_array(array, size);
}
}
}

/**
 * smallest - smalles element in the array
 * @array: array
 * @min_idx: min_idx after previous minimum
 * @size: Size
 * Return: min_idx of the smallest.
 */

size_t smallest(int *array, size_t min_idx, size_t size)
{
int smallest_idx = array[min_idx];
size_t new_min_idx = min_idx;

for (; min_idx < size; min_idx++)
{
if (array[min_idx] < smallest_idx)
{
smallest_idx = array[min_idx];
new_min_idx = min_idx;
}
}
return (new_min_idx);
}

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
