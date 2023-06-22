#include "monty.h"
/**
  * f_rotr- function that rotates stack to bottom
  * @head: head
  * @counter: number of line
  * Return: void
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *dup;

	dup = *head;
	if (!*head || (*head)->next == NULL)
	{
		return;
	}
	while (dup->next)
	{
		dup = dup->next;
	}
	dup->next = *head;
	dup->prev->next = NULL;
	dup->prev = NULL;
	(*head)->prev = dup;
	(*head) = dup;
}
