#include "monty.h"
/**
 * set_queue - sets the queue flag
 * @_headstack_head: pointer to the _headstack_head
 * @counter: line number
 * Return: void
*/
void set_queue(stack_t **stack_head, unsigned int counter)
{
	(void)stack_head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * add_to_queue - adds a node to the end of the stack_head
 * @stack_head: pointer to the head of the stack_head
 * @value: value to be added
 * Return: void
*/
void add_to_queue(stack_t **stack_head, int value)
{
	stack_t *new_node, *temp;

	temp = *stack_head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = value;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*stack_head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
