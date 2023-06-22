#include "monty.h"
/**
 * print_string - prints the string beginning at the top of the stack,
 * followed by a new line
 * @stack_head: pointer to the head of the stack
 * @counter: line no.
 * Return: no return of anything
*/
void print_string(stack_t **stack_head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *stack_head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
