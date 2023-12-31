#include "monty.h"
/**
 * f_pall - function that prints the stack
 * @head: head of the stack
 * @counter: void
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (!h)
		return;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
