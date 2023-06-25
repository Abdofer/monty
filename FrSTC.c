#include "hdr.h"

/**
* gofree_stack - function that frees a doubly linked list
* @head: head pointer to the stack
*
* Return: nothing
*/
void gofree_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
* dof_stack - function that prints the top
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void dof_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
