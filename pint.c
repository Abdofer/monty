#include "monty.h"

/**
 * gopint -  prints the value at the top of the stack
 * @top: top of the stack
 * @line_number: current line number in the file
 */
void gopint(stack_t **top, ui line_number)
{
	if (!*top)
		pint_err(line_number);

	printf("%d\n", (*top)->n);
}
