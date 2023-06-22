#include "monty.h"
/**
 * printst - prints the value at the top of the stack
 * @stack_head: pointer to the head of the stack
 * @line_number: line_number
 * Return: no return
*/
void printst(stack_t **stack_head, unsigned int line_number)
{
	if (*stack_head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack_head)->n);
}