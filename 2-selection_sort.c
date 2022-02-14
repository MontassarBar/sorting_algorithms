#include "sort.h"
/**
 *selection_sort - sorts an array of integers in ascending order
 *@array: the array to be sorted
 *@size: the size of the array
 **/
void selection_sort(int *array, size_t size)
{
int s;
size_t x, y, i;
if (size == 0)
return;
for (x = 0; x < size; x++)
{
i = x;
for (y = x + 1; y < size; y++)
{
if (array[y] < array[i])
i = y;
}
if (i != x)
{
s = array[i];
array[i] = array[x];
array[x] = s;
print_array(array, size);
}
}
}
