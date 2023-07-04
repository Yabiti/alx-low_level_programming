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
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
    return (new);
}

