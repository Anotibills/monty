#include "monty.h"
/**
 * addnode - function that add node to the head stack
 * @head: stack head
 * @n: new node
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
