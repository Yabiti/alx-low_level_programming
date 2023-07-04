#include "lists.h"
/**
*sum_listint - calculates the sum of all the data 
*@head: first node in the single linked list
*Return: resulting sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
