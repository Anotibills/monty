#include "monty.h"
/**
 * f_pint - function that prints the top
 * @head: head of stack
 * @counter: line_number
 * Return: void
*/
void f_pint(stack_t **head, unsigned int counter)
{
	stack_t h = *head

	if (!h)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (h)->n);
}
