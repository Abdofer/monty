#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef unsigned int ui;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, ui line_number);
} instruction_t;

typedef struct monty
{
	FILE *f;
	stack_t *top;
	char *line;
} monty;

extern monty data;

/* error handling */
void abdinvalid_instruction_err(char *op, int line);
void abdargument_err(void);
void malloc_err(void);
void open_err(char *);
void int_err(ui);
void pint_err(ui);
void pop_err(ui);
void div_by_zero_err(ui);
void short_stack_err(char *, ui);
void pchar_err(ui);
void pchar_oor_err(ui);


/* stack manipulation */
void (*get_opcode(char *op, int line_number)) (stack_t **, ui);
void gopush(stack_t **top, ui line_number);
void gopall(stack_t **top, ui line_number);
void gopint(stack_t **top, ui line_number);
void topop(stack_t **top, ui line_number);
void roswap(stack_t **top, ui line_number);
void addg(stack_t **top, ui line_number);
void dinop(stack_t **stack, ui line_number);
void susub(stack_t **top, ui line_number);

void _divri(stack_t **top, ui line_number);
void kumul(stack_t **top, ui line_number);
void model(stack_t **top, ui line_number);

void ppchard(stack_t **top, ui line_number);
void dipstr(stack_t **top, ui line_number);
void rotlki(stack_t **top, ui line_number);
void forotr(stack_t **top, ui line_number);

void fre_staker(stack_t **head);
void fredoall(int);


int is_number(char *s);

#endif /* MONTY_H */
