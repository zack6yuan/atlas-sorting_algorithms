#include "sort.h"
/**
 * insertion_sort _list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: the list that is being sorted
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current;
listint_t *next_node;

if (!list || !*list || !(*list))
{
return;
}
current = (*list)->next;
while (current)
{
next_node = current->next;
while (current->prev && current->prev->n > current->n)
{
swap(list, current->prev, current);
print_list(*list);
}
current = next_node;
}
}

/**
 * swap - swaps two nodes in a list
 * @node_one: the first node
 * @node_two: the second node
 * @list: the list being sorted
 * Return: void
 */
void swap(listint_t **list, listint_t *node_one, listint_t *node_two)
{
if (node_one->prev)
{
node_one->prev->next = node_two;
}
else
{
*list = node_two;
}
if (node_two->next)
{
node_two->next->prev = node_one;
}
node_one->next = node_two->next;
node_two->prev = node_one->prev;
node_one->prev = node_two;
node_two->next = node_one;
}
