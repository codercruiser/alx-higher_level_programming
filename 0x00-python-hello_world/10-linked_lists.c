#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *curt;
	unsigned int n; /* number of nodes */

	curt = h;
	n = 0;
	while (curt != NULL)
	{
		printf("%i\n", curt->n);
		curt = curt->next;
		n++;
	}

	return (n);
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **hd, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *hd;
	*hd = new;

	return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *hd)
{
	listint_t *curt;

	while (hd != NULL)
	{
		curt = hd;
		hd = hd->next;
		free(curt);
	}
}
