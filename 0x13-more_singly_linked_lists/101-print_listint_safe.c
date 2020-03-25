#include "lists.h"

/**
 *
 *
 *
 *
 *
 */


size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	const listint_t *temp;
	unsigned int count = 0;


	if (head == NULL)
		exit(98);
	node = head;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		count++;

		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp < node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}


return (count);
}
