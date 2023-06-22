#include "monty.h"

/**
 * multiply_top_two -The top two elements of the stack multiplied.
 * @stack_head: stack head
 * @counter: line_no
 * Return: None
*/
void multiply_top_two(stack_t **stack_head, unsigned int counter)
{
	stack_t *temp;
	int stack_len = 0, result;

	temp = *stack_head;
	while (temp)
	{
		temp = temp->next;
		stack_len++;
	}
	if (stack_len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE);
	}
	temp = *stack_head;
	result = temp->next->n * temp->n;
	temp->next->n = result;
	*stack_head = temp->next;
	free(temp);
}
