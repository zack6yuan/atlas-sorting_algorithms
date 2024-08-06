#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending 
 * order using the Bubble Sort algorithm
 * @array: the array of integers being sorted
 * @size: the size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t i; /*loop counter*/
size_t o; /*loop counter*/
int temp; /*used to swap*/

if (!array || size < 2) /*if NULL or size < 2*/
{
return; /*return nothing*/
}
for (o = 0; o < size - 1; o++)
{
for (i = 0; i < size - o - 1; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i+1];
array[i + 1] = temp;
print_array(array, size);
}
}
}
}
