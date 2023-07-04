#include "lists.h"
/**
*add_nodeint_end - adds a node at the end pf linked lists
*@head:  pointer to the first element in the list
*@n: data to insert in the new element
*Return: pointer to the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;
    listint_len *temp = *head;

    new = malloc(sizeof(listint_t));
    if (!new)
    return (null);
    new-> = n;
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
        return (new);
    }
    while (temp->next)
    temp = temp->next;
    temp->next = new;
    return (new);
}
