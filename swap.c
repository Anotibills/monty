#include "monty.h"
/**
 * f_swap - function that swaps the top two elements of the stack.
 * @head: head of the stack
 * @counter: line count
 * Return: void
*/
void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
