#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
 *  * free_dlistint - Free  list
 *   *
 *    * @head: A pointer to  first element of  list
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}


