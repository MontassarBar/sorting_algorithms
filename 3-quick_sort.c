#include "sort.h"
/**
*swap - swap
*@a: int
*@b: int
**/
void swap(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}
/**
*partition - Lomuto partition scheme
*@array: array
*@l: int
*@h: int
*@size: the size of the array
*Return: x + 1
*/
int partition(int array[], int l, int h, size_t size)
{
int pivot = array[h];
int x = l - 1;
int j;
for (j = l; j < h; j++)
{
if (array[j] <= pivot)
{
x++;
if (x != j)
{
swap(&array[x], &array[j]);
print_array(array, size);
}
}
}
if (array[x + 1] > array[h])
{
swap(&array[x + 1], &array[h]);
print_array(array, size);
}
return (x + 1);
}
/**
*qs - qs
*@array: array
*@l: int
*@h: int
*@size: the size of the array
*/
void qs(int array[], int l, int h, size_t size)
{
int p;
if (l < h)
{
p = partition(array, l, h, size);
qs(array, l, p - 1, size);
qs(array, p + 1, h, size);
}
}
/**
 *quick_sort - sorts an array of integers in ascending order
 *@array: array
 *@size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
int l = 0, h = size - 1;
if (size < 1)
return;
qs(array, l, h, size);
}
