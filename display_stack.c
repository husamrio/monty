#include "monty.h"
/**
 * display_stack - displays the stack
 * @stack_head: pointer to the head of the stack
 * @line_number: not used
 * Return: no return
*/
void display_stack(stack_t **stack_head, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack_head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
