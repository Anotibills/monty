#include "monty.h"
/**
 * f_add - function that adds the top two elements of the stack.
 * @head: head of stack
 * @counter: number of line
 * Return: void
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int strlen = 0, aux;

	h = *head;
	while (h != NULL)
	{
		h = h->next;
		strlen++;
	}
	if (strlen < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
