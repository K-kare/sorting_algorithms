#include "sort.h"
/**
*selection_sort - func that sort in selection sort
*@array: array that contains the element.
*@size: size of the array
**/
void selection_sort(int *array, size_t size)
{
int temp;
size_t i;
size_t j;
int min;
for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[min] > array[j])
{
min = j;
}
}
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
}
