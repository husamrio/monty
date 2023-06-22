#include "monty.h"

/**
 * print_char - prints the char at the the _headstack_head top.
 * then by a new line
 * @stack_head: _headstack_head head
 * @counter: line no.
 * Return: no return
*/
void print_char(stack_t **stack_head, unsigned int counter)
{
	stack_t *temp;

	temp = *stack_head;
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, _headstack_head empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}
