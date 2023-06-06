#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Inserts a node into a sorted linked list
 * @head: Pointer to the head of the linked list
 * @number: The value to be inserted
 *
 * Description: This function inserts a new node with the given value into
 * a sorted linked list in ascending order.
 *
 * Return: The address of the new node, or NULL if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = NULL;
	listint_t *prev_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (new_node)
	{
		new_node->n = number;
		new_node->next = *head;
		if (new_node->next == NULL || new_node->n <= (*head)->n)
			*head = new_node;
		while (new_node->next && new_node->n > new_node->next->n)
		{
			prev_node = new_node->next;
			new_node->next = prev_node->next;
		}
		if (prev_node)
			prev_node->next = new_node;
	}

	return (new_node);
}

