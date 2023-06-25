#include "monty.h"

/**
 * div_by_zero_err - handels div by zero error
 * @line_number: line number where the error occurs
 */
void div_by_zero_err(ui line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	fredoall(EXIT_FAILURE);
}

/**
 * short_stack_err - handels stack too short error
 * @opcode: the opcode
 * @line_number: line number where the error occurs
 */
void short_stack_err(char *opcode, ui line_number)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, opcode);
	fredoall(EXIT_FAILURE);
}

/**
 * pchar_err - handels ppchard empty stack error
 * @line_number: line number where the error occurs
 */
void pchar_err(ui line_number)
{
	fprintf(stderr, "L%u: can't ppchard, stack empty\n", line_number);
	fredoall(EXIT_FAILURE);
}

/**
 * pchar_oor_err - handels ppchard value out of range error
 * @line_number: line number where the error occurs
*/
void pchar_oor_err(ui line_number)
{
	fprintf(stderr, "L%u: can't ppchard, value out of range\n", line_number);
	fredoall(EXIT_FAILURE);
}
