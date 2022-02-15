#include "sort.h"
/**
 *swap_nodes - swap 2 nodes
 *@node1: first node
 *@node2: second node
 */
void swap_nodes(listint_t *node1, listint_t *node2)
{
if (node2->next)
node2->next->prev = node1;
if (node1->prev)
node1->prev->next = node2;
node2->prev = node1->prev;
node1->next = node2->next;
node2->next = node1;
node1->prev = node2;
}
/**
 *insertion_sort_list - sorts an array of integers in ascending order
 *@list: list
 **/
void insertion_sort_list(listint_t **list)
{
listint_t *h, *n;
if (list == NULL || *list == NULL)
return;
h = *list;
while (h)
{
n = h;
while (n->prev)
{
if (n->prev->n > n->n)
{
swap_nodes(n->prev, n);
if (n->prev == NULL)
*list = n;
print_list(*list);
}
else
n = n->prev;
}
h = h->next;
}
}
