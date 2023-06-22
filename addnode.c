#include "monty.h"
/**
 * addnode - function that adds new node to the head stack
 * @head: stack head
 * @n: new value
 * Return: void
*/
void addnode(stack_t **head, int n)
{

	stack_t *nnode, *aux;

	aux = *head;
	nnode = malloc(sizeof(stack_t));
	if (!nnode)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = nnode;
	nnode->n = n;
	nnode->next = *head;
	nnode->prev = NULL;
	*head = nnode;
}
