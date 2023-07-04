#include "lists.h"
/**
*reverse_listint - reverse a linked list
*@head: pointer to the first node in the new list
*Return: pointer to the first node in to the new node
*/
listint_t *reverse_listint(listint_t **head)
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
