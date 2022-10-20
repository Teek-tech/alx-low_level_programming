#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - Print all elements of a list_t list
 * @h: Pointer to the first element of the list
 *
 * Return: Number of elements in the list
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
n++;
}
return (n);
}
