#include "monty.h"
/**
  *f_sub - function that subtrats from stack
  *@head: head of stack
  *@counter: number of line
  *Return: void
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sub;
	int node;

	aux = *head;
	for (node = ; aux != NULL; node++)
		aux = aux->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: cannot sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sub = aux->next->n - aux->n;
	aux->next->n = sub;
	*head = aux->next;
	free(aux);
}