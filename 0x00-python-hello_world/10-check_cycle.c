#include "lists.h"
#include <stdio.h>

int check_cycle(listint_t *list)
{
	listint_t *cursor;
	listint_t *head;

	hd = list;
	cur = list;
	while (cur != NULL && cur->next != NULL)
	{
		hd = hd->next;
		cur = cur->next->next;
		if (hd == cur)
			return (1);
	}
	return (0);
}
