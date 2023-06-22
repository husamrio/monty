#include "monty.h"

/**
* free_list - deallocates memory for a doubly linked list
* @stack_head: pointer to the head of the stack
*/
void free_list(stack_t *stack_head)
{
	stack_t *temp;

	temp = stack_head;
	while (stack_head)
	{
		temp = stack_head->next;
		free(stack_head);
		stack_head = temp;
	}
}
