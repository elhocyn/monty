#include "monty.h"

/**
 * stack - Set the data format to STACK
 * @stack: pointer to the head of the stack (unused)
 * @line_number: line number of the command being run (unused)
 */

void stack(stack_t **stack, uint line_number)
{
	(void)stack;
	(void)line_number;
	data.format = STACK;
}

/**
 * queue - Set the data format to QUEUE
 * @stack: pointer to the head of a stack (unused)
 * @line_number: the line number of the comnd being run (unused)
 */

void queue(stack_t **stack, uint line_number)
{
	(void)stack;
	(void)line_number;
	data.format = QUEUE;
}
