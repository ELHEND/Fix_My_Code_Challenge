#include <stdio.h>
#include "lists.h"


/**
 *  * print_dlistint - Prints a doubly linkedlist of integers
 *   *
 *    * @h: pointer to the first element of a list
 *     *
 *      * Return:  number of element printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t k;

	k = 0;
	while (h)
	{
		printf("%d\n", h->k);
		h = h->next;
		k++;
	}
	return (k);
}

