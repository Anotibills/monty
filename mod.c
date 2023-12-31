#include "monty.h"
/**
 * f_mod - function that computes the remainder of the division
 * @head: head of stack
 * @counter: line number
 * Return: void
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int strlen = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		strlen++;
	}
	if (strlen < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
