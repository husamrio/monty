#include "monty.h"
/**
 * display_stack - displays the stack
 * @stack_head: pointer to the head of the stack
 * @counter: not used for the time being
 * Return: none
*/
void display_stack(stack_t **stack_head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *stack_head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
