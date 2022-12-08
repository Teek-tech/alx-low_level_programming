#include "lists.h"
/**
 * print_dlistint - Prints all the nodes of ll
 * @h: Is the pointer to node structure
 * Return: the amount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
