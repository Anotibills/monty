#include "monty.h"
/**
* free_stack - function that frees doubly linked list
* @head: head of stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
