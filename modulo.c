#include "monty.h"
/**
 * perform_modulo - Performs the modulo operation on the top two elements of the stack.
 * @stack_head: Pointer to the head of the stack.
 * @counter: Line number.
 * Return: No return value.
*/
void perform_modulo(stack_t **stack_head, unsigned int counter)
{
	stack_t *h = *stack_head;
	int stack_size = 0, remainder;

	while (h)
	{
		h = h->next;
		stack_size++;
	}

	if (stack_size < 2)
	{
		fprintf(stderr, "L%d: Not enough elements in the stack to perform modulo operation\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE);
	}

	h = *stack_head;

	if (h->n == 0)
	{
		fprintf(stderr, "L%d: Division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE);
	}

	remainder = h->next->n % h->n;
	h->next->n = remainder;
	*stack_head = h->next;
	free(h);
}
