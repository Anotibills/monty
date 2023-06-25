#include "monty.h"
/**
 * f_mul - function that multiplies two elements of the top of stack.
 * @head: head of stack
 * @counter: number of line
 * Return: void
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int strlen = 0;
	int aux;

	h = *head;
	while (h != NULL)
	{
		h = h->next;
		strlen++;
	}
	if (strlen < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
