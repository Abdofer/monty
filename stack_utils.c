#include "monty.h"

/**
 * fre_staker - Frees a stack from memory
 * @head: Pointer to the head of the stack
 */
void fre_staker(stack_t **head)
{
	stack_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

/**
 * fredoall - frees all allocated memory
 * @exit_code: the exit code
*/
void fredoall(int exit_code)
{
	fclose(data.f);
	free(data.line);
	fre_staker(&data.top);
	exit(exit_code);
}
