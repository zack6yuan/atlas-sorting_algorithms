#include "sort.h"
/**
 * recursive_sort - sorts a partition of an array recursively
 * @array: the array being sorted
 * @start: the index (starting) of the partition
 * @end: the index (end) of the partition
 * Return: void
 */
void recursive_sort(int *array, int start, int end)
{
        int pivot = 0;
        if (start < end) /*if start idx < end idx*/
        {
                pivot = partition(array, start, end); /*calls partition function*/
                recursive_sort(array, start, pivot -1); /*sort before pivot*/
                recursive_sort(array, pivot + 1, end); /*sort after pivot*/
        }
}
/**
 * quick_sort - sorts an array of integers in ascending 
 * order using the quick sort algorithm
 * @array: the array that is going to be sorted
 * @size: the size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
        if (!array || size < 2) /*checks if array is NULL or < 2*/
        {
                return; /*return nothing*/
        }
        recursive_sort(array, 0, size -1); /*calls the recursive sort function*/
}
/**
 * partition - implements the lomuto partition scheme
 * @array: the array that is being partitioned
 * @start: the index (starting) of the partition
 * @end: the index (end) of the partition
 * Return: the pivot's index
 */
int partition(int *array, int start, int end)
{
        int pivot = array[end]; /*array's last element*/
        int x;
        int y; 

        x = start -1; /*1 less than start idx*/
        for (int y = start; y < end; y++)
        { /*loop from start idx to end idx*/
                if (array[y] < pivot)
                { /*if current < pivot*/
                        x++;
                        swap(&array[x], &array[y]); /*swaps current with element[x]*/
                }
        }
        swap(&array[x + 1], &array[end]);
        print_array(array, size); /*print array*/

        return (x + 1); /*return pivot's index*/
}
/** 
 * swap - swaps two elements in array
 * @x: the first element
 * @y: the second element
 * Return: void
 */
void swap(int *x, int *y)
{
        int swap_val;
        swap_val = *x; /*store x in swap_val*/
        *x = *y; /*set y val to x*/
        *y = swap_val; /*set swap_val to y*/
}
