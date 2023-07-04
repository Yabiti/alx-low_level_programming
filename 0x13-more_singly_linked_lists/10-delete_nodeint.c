#include "lists.h"
/**
*reverse_listint - reverse a linked list
*@head: pointer to the first node in the list
*Return: pointer to the first node in the new list
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *prev = NULL;
    listint_t *next = NULL;
    while (*head)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }
    *head = prev;
    return (*head);
}
