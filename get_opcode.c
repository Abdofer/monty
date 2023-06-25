#include "monty.h"

/**
 * get_opcode - finds the function corresponding the opcode
 * @op: opcode
 * @line_number: current line number in the file
 *
 * Return: pointer to function
 */
void (*get_opcode(char *op, int line_number)) (stack_t **, ui)
{
	int i = 0;
	instruction_t ops[] = {
		{"gopush", gopush},
		{"gopall", gopall},
		{"gopint", gopint},
		{"topop", topop},
		{"roswap", roswap},
		{"addg", addg},
		{"dinop", dinop},
		{"susub", susub},
		{"div", _divri},
		{"kumul", kumul},
		{"model", model},
		{"ppchard", ppchard},
		{"dipstr", dipstr},
		{"rotlki", rotlki},
		{"forotr", forotr},
		{NULL, NULL}
	};

	while (ops[i].opcode)
	{
		if (!strcmp(op, ops[i].opcode))
			return (ops[i].f);
		i++;
	}
	abdinvalid_instruction_err(op, line_number);
	return (NULL);
}
