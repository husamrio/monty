#include "monty.h"
/**
 * rotate_stack_bottom - rotates the stack to the bottom
 * @stack_head: pointer to the head of the stack
 * @counter: line number
 * Return: no return
 */
void rotate_stack_bottom(stack_t **stack_head, __attribute__((unused)) unsigned int counter)
{
	stack_t *temp;

	temp = *stack_head;
	if (*stack_head == NULL || (*stack_head)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *stack_head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*stack_head)->prev = temp;
	(*stack_head) = temp;
}
