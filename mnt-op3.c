#include "hdr.h"

/**
* gof_pop - function that prints the top of the stack
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void gof_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		gofree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

/**
* sof_pint - function that prints the top of the stack
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void sof_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		gofree_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
* f_nopdo - function that does nothing
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_nopdo(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
