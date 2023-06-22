#include "monty.h"
/**
 * subtract_top - subtracts the top two elements of the stack_head
 * @stack_head: pointer to the head of the stack_head
 * @counter: line number
 * Return: void
 */
void subtract_top(stack_t **stack_head, unsigned int counter)
{
	stack_t *temp;
	int difference, node_count;

	temp = *stack_head;
	for (node_count = 0; temp != NULL; node_count++)
		temp = temp->next;
	if (node_count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE);
	}
	temp = *stack_head;
	difference = temp->next->n - temp->n;
	temp->next->n = difference;
	*stack_head = temp->next;
	free(temp);
}
