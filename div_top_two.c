#include "monty.h"
/**
 * divide_top_two - divides the top two elements of the stack.
 * @stack_head: pointer to the head of the stack
 * @counter: line number of the command being executed
 * Return: void
*/
void divide_top_two(stack_t **stack_head, unsigned int counter)
{
	stack_t *temp;
	int length = 0, result;

	temp = *stack_head;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE);
	}
	temp = *stack_head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE);
	}
	result = temp->next->n / temp->n;
	temp->next->n = result;
	*stack_head = temp->next;
	free(temp);
}
