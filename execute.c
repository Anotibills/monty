#include "monty.h"
/**
 * execute - function that executes the opcode
 * @stack: head of linked list to stack
 * @counter: counter of lines
 * @file: pointer to the monty file
 * @content: content in lines
 * Return: 0 if fail, or 1 if success
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push},
				{"pall", f_pall},
				{"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"stack", f_stack},
				{"queue", f_queue},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *ops;

	ops = strtok(content, " \n\t");
	if (ops && ops[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && ops)
	{
		if (strcmp(ops, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (ops && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, ops);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}