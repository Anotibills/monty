#include "monty.h"
/**
 * f_pstr - function that prints the string from the top of the stack
 * @head: head of the stack
 * @counter: line count
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h != NULL)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
