#include "sort.h"
/**
*bubble_sort - func to sort an array of elements in ascending order
*@array: an array of integers to sort
*@size: The size of the array

*/
void bubble_sort(int *array, size_t size)
{
size_t i;
size_t j;
if (array == NULL || size < 2)
return;
for (i = 0;  i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
int temp = array[j];
array[j] = array[j + 1];
print_array (array, size);
array[j + 1] = temp;
}
}
}
}
