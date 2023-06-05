#include "lists.h"

int check_cycle(listint_t *list)
{
    listint_t *curt;
    listint_t *head;

    head = list;
    curt = list;
    while (curt != NULL && curt->next != NULL)
    {
        head = head->next;
        curt = curt->next->next;
        if (head == curt)
            return 1;
    }
    return 0;
}
