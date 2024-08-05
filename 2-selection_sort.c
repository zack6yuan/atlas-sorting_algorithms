#include "sort.h"
/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection Sort algorithm
 * @array: the array that is being sorted
 * @size: the size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
    size_t x; /*loop counter*/
    size_t y; /*loop counter*/
    size_t min_val;
    int temp;

    if (!array || size < 2) /*parameter*/
    {
        return;
    }
    for (x = 0; x < size -1; x++) /*loop*/
    {
        min_val = x;
        for (y = x + 1; y < size; y++) /*loop*/
        {
            if (array[y] < array[min_val])
            {
                min_val = y;
            }
            if (min_val != x)
            {
                temp = array[x];
                array[x] = array[min_val];
                array[min_val] = temp;
                print_array(array, size);
            }
        }
    }
}
