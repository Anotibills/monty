#include "monty.h"
/**
 * f_queue - function that prints the top
 * @head: head of stack
 * @counter: line count
 * Return: void
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - function that add node to the tail stack
 * @n: a new node
 * @head: head of the stack
 * Return: no return
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
