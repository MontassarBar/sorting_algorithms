#include "sort.h"
/**
 *swap - swap two integers
 *@x: int
 *@y: int
 */
void swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}
/**
 *bubble_sort - sorts an array of integers in ascending order
 *@array: the array to be sorted
 *@size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
size_t x, y;
for (x = 0; x < size - 1; x++)
{
for (y = 0; y < size - x - 1; y++)
{
if (array[y] > array[y + 1])
swap(&array[y], &array[y + 1]);
print_array(array, size);
}
}
}
