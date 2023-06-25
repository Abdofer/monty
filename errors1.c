#include "monty.h"

/**
 * open_err - Handles error when file cannot be opened.
 * @filename: file name.
 */
void open_err(char *filename)
{
	fprintf(stderr, "Error: can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}


/**
 * malloc_err - Handles error when a dynamic memory allocation fails.
 */
void malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	 fredoall(EXIT_FAILURE);
}

/**
 * abdargument_err - Handles error when required arguments are missing.
 */
void abdargument_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * abdinvalid_instruction_err - handels invalid instruction error
 * @op: invalid opcode
 * @line: line number where the error appears
*/
void abdinvalid_instruction_err(char *op, int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, op);
	 fredoall(EXIT_FAILURE);
}

/**
 * int_err - Handles error when gopush
 * instruction is not followed by an integer.
 * @line: The line number where the error occurred.
 */
void int_err(ui line)
{
	fprintf(stderr, "L%u: usage: gopush integer\n", line);
	 fredoall(EXIT_FAILURE);
}
