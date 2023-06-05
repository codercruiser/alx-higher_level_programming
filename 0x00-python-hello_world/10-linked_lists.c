#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @hd: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *hd)
{
    const listint_t *curt;
    size_t n = 0;

    curt = hd;
    while (curt != NULL)
    {
        printf("%d\n", curt->n);
        curt = curt->next;
        n++;
    }

    return n;
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_hd;

    new_hd = malloc(sizeof(listint_t));
    if (new_hd == NULL)
        return NULL;

    new_hd->n = n;
    new_hd->next = *head;
    *head = new_hd;

    return new_hd;
}

/**
 * free_listint - frees a listint_t list
 * @hd: pointer to list to be freed
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
