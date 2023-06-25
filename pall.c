#include "monty.h"

/**
 * gopall - prints all the values on the stack, starting from the top
 * @top: top of the stack
 * @line_number: current line number in the file
 */
void gopall(stack_t **top, ui line_number)
{
	stack_t *tmp = *top;
	(void)line_number;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
