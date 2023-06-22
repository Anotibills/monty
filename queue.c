#include "monty.h"
/**
 * f_queue - function that sets the format of a data to a queue
 * @head: void
 * @counter: void
 * Return: void
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - function that add node to the queue
 * @n: new value
 * @head: stack head
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *nnode, *aux;

	aux = *head;
	nnode = malloc(sizeof(stack_t));
	if (!nnode)
	{
		printf("Error\n");
	}
	nnode->n = n;
	nnode->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = nnode;
		nnode->prev = NULL;
	}
	else
	{
		aux->next = nnode;
		nnode->prev = aux;
	}
}
