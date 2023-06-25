#include "hdr.h"

/**
* doexecute - function that executes the opcode
* @stack: head stack linked list
* @counter: line count
* @file: pointer to monty file stream
* @content: line content
*
* Return: nothing
*/
int doexecute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", go_push}, {"pall", go_pall}, {"pint", sof_pint},
				{"pop", gof_pop},
				{"swap", gof_swap},
				{"add", gof_add},
				{"nop", f_nopdo},
				{"sub", sof_sub},
				{"div", dof_div},
				{"mul", dof_mul},
				{"mod", dof_mod},
				{"pchar", dof_pchar},
				{"pstr", dof_pstr},
				{"rotl", dof_rotl},
				{"rotr", f_rotrdo},
				{"queue", dof_queue},
				{"stack", dof_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		gofree_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
