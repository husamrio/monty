#include "monty.h"

/**
* rotate_left - Rotates to the top of the stack_head
* @stack_head: pointer to the top of the stack_head
* @counter: line number of the command being executed (unused)
*
* Return: void
*/
void rotate_left(stack_t **stack_head, __attribute__((unused)) unsigned int counter)
{
stack_t *temp = *stack_head, *next_node;

if (*stack_head == NULL || (*stack_head)->next == NULL)
{
return;
}
next_node = (*stack_head)->next;
next_node->prev = NULL;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = *stack_head;
(*stack_head)->next = NULL;
(*stack_head)->prev = temp;
(*stack_head) = next_node;
}
