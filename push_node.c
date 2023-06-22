#include "monty.h"

/**
 * push_node - Adds a node to head of the stack
 * @stack_head: Head of the stack
 * @value: Value to be added
 * Return: None
 */
void push_node(stack_t **stack_head, int value)
{
	stack_t *new_node, *temp;

	temp = *stack_head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
		temp->prev = new_node;
	new_node->n = value;
	new_node->next = *stack_head;
	new_node->prev = NULL;
	*stack_head = new_node;
}
