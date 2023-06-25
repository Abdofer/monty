#include "monty.h"

/**
 * susub - subtracts the top two elements of the stack
 * @top: pointer to the head of the stack
 * @line_number: line number of the command being run
 */
void susub(stack_t **top, ui line_number)
{
	stack_t *tmp;

	if (!*top || !(*top)->next)
		short_stack_err("susub", line_number);

	(*top)->next->n -= (*top)->n;
	tmp = *top;
	*top = (*top)->next;
	free(tmp);
}
